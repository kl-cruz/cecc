package Fixecc;

import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.UnsupportedEncodingException;
import java.security.InvalidKeyException;
import java.security.SignatureException;
import java.security.spec.InvalidKeySpecException;
import org.bouncycastle.jce.ECNamedCurveTable;
import org.bouncycastle.jce.spec.ECParameterSpec;
import java.security.InvalidAlgorithmParameterException;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import java.math.BigInteger;
import java.security.KeyPair;
import java.security.KeyFactory;
import java.security.KeyPairGenerator;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.Signature;
import java.util.Random;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.bouncycastle.asn1.ASN1InputStream;
import org.bouncycastle.asn1.DERInteger;
import org.bouncycastle.asn1.DLSequence;
import org.bouncycastle.crypto.params.ECDomainParameters;
import org.bouncycastle.crypto.params.ECPrivateKeyParameters;
import org.bouncycastle.crypto.params.ParametersWithRandom;
import org.bouncycastle.crypto.prng.FixedSecureRandom;
import org.bouncycastle.crypto.signers.ECDSASigner;
import org.bouncycastle.jcajce.provider.asymmetric.ec.BCECPrivateKey;
import org.bouncycastle.jcajce.provider.asymmetric.ec.BCECPublicKey;
import org.bouncycastle.jce.interfaces.ECPublicKey;
import org.bouncycastle.jce.spec.ECPrivateKeySpec;
import org.bouncycastle.jce.spec.ECPublicKeySpec;
import org.bouncycastle.math.ec.ECCurve;
import org.bouncycastle.math.ec.ECFieldElement;
import org.bouncycastle.math.ec.ECPoint;
import org.bouncycastle.util.BigIntegers;
import org.bouncycastle.util.encoders.Hex;

/*
 * This project require BouncyCastle crypto lib to proper works 
 */
public class Fixecc {

    private SecureRandom secRand = new SecureRandom();
    public static PrintWriter out = null;

    public static void create_header_file(String filename) {
        try {
            FileWriter outFile = new FileWriter(filename);
            System.out.println("Open file to write: " + filename);
            out = new PrintWriter(outFile);
            out.println("/*");
            out.println("File generate using external software");
            out.println("*/");
            out.println("#ifndef ECC_FIXTURES_H_");
            out.println("#define ECC_FIXTURES_H_");
            out.println("#include \"bignum.h\"");
            out.println("#include \"ecc.h\"");
            out.println("");

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void add_to_header_file(String line) {
        if (out != null) {
            out.println(line);
        }
    }

    public static void close_header_file() {
        out.println("");
        out.println("#endif /* ECC_FIXTURES_H_ */");
        out.close();
        out = null;
    }

    public static void translate_bigint_and_write(BigInteger number, String var_name) {
        int len = (int) Math.ceil(number.toString(16).length() / 8.0);
        String snumber = "";

        if ((number.compareTo(BigInteger.ZERO)) < 0) {
            BigInteger b = number;
            b = b.add(BigInteger.ONE.shiftLeft(len * 32));
            snumber = b.toString(16);
        } else {
            snumber = number.toString(16);
        }

        String to_write = "const uint32_t " + var_name + "_tab [" + len + "] = {";
        String temp = "0x";
        int i;
        for (i = snumber.length(); i >= 0; i -= 8) {
            temp += snumber.substring(i - 8 < 0 ? 0 : i - 8, i);
            to_write += temp;
            temp = "";

            if (i > 8) {
                to_write += ", 0x";
            }
        }
        to_write += "};";
        add_to_header_file("//variable '" + var_name + "' value: 0x" + number.toString(16));
        add_to_header_file(to_write);
        add_to_header_file("const bn_uint_t " + var_name + " = {.number = " + var_name + "_tab, .length = " + len + "};");
    }

    private static void generate_points_add_fixture(String curve_name, int samples) throws NoSuchAlgorithmException, NoSuchProviderException {
        ECParameterSpec ecSpec = ECNamedCurveTable.getParameterSpec(curve_name);
        ECPoint ga = (ECPoint) ecSpec.getG();
        SecureRandom random = SecureRandom.getInstance("SHA1PRNG", "SUN");
        ECPoint qMultiply = null;
        BigInteger k = null;
        BigInteger ax = null;
        BigInteger ay = null;
        BigInteger bx = null;
        BigInteger by = null;
        BigInteger sx = null;
        BigInteger sy = null;


        String var_name = "ecc_points_add_" + curve_name + "_";
        String var_nameax = var_name + "ax_";
        String var_namebx = var_name + "bx_";
        String var_nameay = var_name + "ay_";
        String var_nameby = var_name + "by_";
        String var_namesx = var_name + "sx_";
        String var_namesy = var_name + "sy_";
        String var_nametab = var_name + "test_tab";

        String tablength = "uint32_t " + var_name + "tab_len=" + samples + ";";

        for (int i = 0; i < samples; ++i) {
            k = new BigInteger(ecSpec.getN().bitLength(), random);

            qMultiply = ga.multiply(k);
            ax = ga.getX().toBigInteger();
            ay = ga.getY().toBigInteger();
            bx = qMultiply.getX().toBigInteger();
            by = qMultiply.getY().toBigInteger();
            qMultiply = ga.add(qMultiply);
            sx = qMultiply.getX().toBigInteger();
            sy = qMultiply.getY().toBigInteger();



            translate_bigint_and_write(ax, var_nameax + i);
            translate_bigint_and_write(bx, var_namebx + i);
            translate_bigint_and_write(ay, var_nameay + i);
            translate_bigint_and_write(by, var_nameby + i);
            translate_bigint_and_write(sx, var_namesx + i);
            translate_bigint_and_write(sy, var_namesy + i);

        }
        add_to_header_file(tablength);
        add_to_header_file("bn_uint_t *" + var_nametab + "[" + samples + "][6]={");
        for (int i = 0; i < samples; ++i) {

            add_to_header_file("{&" + var_nameax + i + ",&" + var_nameay + i + ",&" + var_namebx + i + ",&" + var_nameby + i + ",&" + var_namesx + i + ",&" + var_namesy + i + "},");

        }
        add_to_header_file("};");

    }

    private static void generate_point_double_fixture(String curve_name, int samples) throws NoSuchAlgorithmException, NoSuchProviderException {
        ECParameterSpec ecSpec = ECNamedCurveTable.getParameterSpec(curve_name);
        ECPoint ga = (ECPoint) ecSpec.getG();
        SecureRandom random = SecureRandom.getInstance("SHA1PRNG", "SUN");
        ECPoint qMultiply = null;
        BigInteger k = null;
        BigInteger ax = null;
        BigInteger ay = null;
        BigInteger sx = null;
        BigInteger sy = null;


        String var_name = "ecc_point_double_" + curve_name + "_";
        String var_nameax = var_name + "ax_";
        String var_nameay = var_name + "ay_";
        String var_namesx = var_name + "sx_";
        String var_namesy = var_name + "sy_";
        String var_nametab = var_name + "test_tab";

        String tablength = "uint32_t " + var_name + "tab_len=" + samples + ";";

        for (int i = 0; i < samples; ++i) {
            k = new BigInteger(ecSpec.getN().bitLength(), random);

            qMultiply = ga.multiply(k);
            ax = ga.getX().toBigInteger();
            ay = ga.getY().toBigInteger();
            qMultiply = ga.twice();
            sx = qMultiply.getX().toBigInteger();
            sy = qMultiply.getY().toBigInteger();



            translate_bigint_and_write(ax, var_nameax + i);
            translate_bigint_and_write(ay, var_nameay + i);
            translate_bigint_and_write(sx, var_namesx + i);
            translate_bigint_and_write(sy, var_namesy + i);

        }
        add_to_header_file(tablength);
        add_to_header_file("bn_uint_t *" + var_nametab + "[" + samples + "][4]={");
        for (int i = 0; i < samples; ++i) {

            add_to_header_file("{&" + var_nameax + i + ",&" + var_nameay + i + ",&" + var_namesx + i + ",&" + var_namesy + i + "},");

        }
        add_to_header_file("};");

    }

    private static void generate_point_multiplication_fixture(String curve_name, int samples) throws NoSuchAlgorithmException, NoSuchProviderException {
        ECParameterSpec ecSpec = ECNamedCurveTable.getParameterSpec(curve_name);
        ECPoint ga = (ECPoint) ecSpec.getG();
        SecureRandom random = SecureRandom.getInstance("SHA1PRNG", "SUN");
        ECPoint qMultiply = null;
        BigInteger k = null;
        BigInteger px = null;
        BigInteger py = null;
        BigInteger sx = null;
        BigInteger sy = null;


        String var_name = "ecc_point_mul_" + curve_name + "_";
        String var_namepx = var_name + "px_";
        String var_namepy = var_name + "py_";
        String var_namesx = var_name + "sx_";
        String var_namesy = var_name + "sy_";
        String var_namek = var_name + "k_";
        String var_nametab = var_name + "test_tab";

        String tablength = "uint32_t " + var_name + "tab_len=" + samples + ";";

        for (int i = 0; i < samples; ++i) {
            k = new BigInteger(ecSpec.getN().bitLength(), random);
            qMultiply = ga.multiply(k);
            px = ga.getX().toBigInteger();
            py = ga.getY().toBigInteger();
            k = new BigInteger(ecSpec.getN().bitLength(), random);
            qMultiply = ga.multiply(k);
            sx = qMultiply.getX().toBigInteger();
            sy = qMultiply.getY().toBigInteger();



            translate_bigint_and_write(k, var_namek + i);
            translate_bigint_and_write(px, var_namepx + i);
            translate_bigint_and_write(py, var_namepy + i);
            translate_bigint_and_write(sx, var_namesx + i);
            translate_bigint_and_write(sy, var_namesy + i);

        }
        add_to_header_file(tablength);
        add_to_header_file("bn_uint_t *" + var_nametab + "[" + samples + "][5]={");
        for (int i = 0; i < samples; ++i) {

            add_to_header_file("{&" + var_namepx + i + ",&" + var_namepy + i + ",&" + var_namek + i + ",&" + var_namesx + i + ",&" + var_namesy + i + "},");

        }
        add_to_header_file("};");

    }

    static class myrandom extends SecureRandom {

        private BigInteger staticNum;

        public myrandom(BigInteger staticNumber) {
            staticNum = staticNumber;
        }

        @Override
        public synchronized void nextBytes(byte[] bytes) {
            byte[] constRandom=staticNum.toByteArray();
            for(int i=0;i<bytes.length;++i)
            {
                bytes[i]=constRandom[i];
            }
            System.out.println("rand:" + new BigInteger(bytes).toString(16));
        }
    }

    private static void generate_ECDSA_fixture(String curve_name, int samples) throws NoSuchAlgorithmException, NoSuchProviderException, InvalidAlgorithmParameterException, InvalidKeyException, SignatureException, UnsupportedEncodingException, IOException, InvalidKeySpecException {
        ECParameterSpec ecSpec = ECNamedCurveTable.getParameterSpec(curve_name);
        /*KeyPairGenerator g = KeyPairGenerator.getInstance("ECDSA", "BC");
        g.initialize(ecSpec, new SecureRandom());
        KeyPair pair = g.generateKeyPair();
        
        
        BCECPrivateKey priv = (BCECPrivateKey) pair.getPrivate();
        BCECPublicKey pub = (BCECPublicKey) pair.getPublic();
        
        System.out.println("pubX:" + pub.getQ().getX().toBigInteger().toString(16));
        System.out.println("pubY:" + pub.getQ().getY().toBigInteger().toString(16));
        
        System.out.println("Prvd:" + priv.getD().toString(16));
        //ECPrivateKeySpec =  new ECPrivateKeySpec()
        
        String plaintext = "trololo";
        //0x65637572, 0x20612073, 0x68206F66, 0x20686173, 0x69732061, 0x68697320, 0x6F2C2054, 0x48616C6C
        BigInteger msg = new BigInteger("48616C6C6F2C205468697320697320612068617368206F662061207365637572", 16);
        
        Signature sig = Signature.getInstance("SHA256withECDSA", "BC");
        sig.initSign(pair.getPrivate()); // always use the same pre-defined random number as seed
        sig.update(msg.toByteArray());
        byte[] signature = sig.sign();
        System.out.println("signature: " + new BigInteger(signature).toString(16));
        try {
        ASN1InputStream decoder = new ASN1InputStream(signature);
        DLSequence seq = (DLSequence) decoder.readObject();
        DERInteger r = (DERInteger) seq.getObjectAt(0);
        DERInteger s = (DERInteger) seq.getObjectAt(1);
        System.out.println("r: " + r.getValue().toString(16));
        System.out.println("s: " + s.getValue().toString(16));
        decoder.close();
        } catch (IOException e) {
        throw new RuntimeException(e);
        }
        
        Signature ecdsaVerify = Signature.getInstance("SHA256withECDSA", "BC");
        ecdsaVerify.initVerify(pair.getPublic());
        ecdsaVerify.update(plaintext.getBytes("UTF-8"));
        boolean result = ecdsaVerify.verify(signature);
        System.out.println(result);*/








        BigInteger d = new BigInteger("41C1CB6B51247A144321435B7A80E714896A33BBAD7294CA401455A194A949FA", 16);
        ECPrivateKeySpec priKeySpec = new ECPrivateKeySpec(
                d, ecSpec);
        ECFieldElement.Fp x_ecfe = new ECFieldElement.Fp(new BigInteger("FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF", 16), new BigInteger("6b17d1f2e12c4247f8bce6e563a440f277037d812deb33a0f4a13945d898c296", 16));

        ECFieldElement.Fp y_ecfe = new ECFieldElement.Fp(new BigInteger("FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF", 16), new BigInteger("4fe342e2fe1a7f9b8ee7eb4a7c0f9e162bce33576b315ececbb6406837bf51f5", 16));

        ECPoint.Fp Basepoint = new ECPoint.Fp(ecSpec.getCurve(), x_ecfe, y_ecfe);

        ECPoint pubPoint = Basepoint.multiply(d);
        ECPublicKeySpec pubKeySpec = new ECPublicKeySpec(
                pubPoint, ecSpec);
        KeyFactory f = KeyFactory.getInstance("ECDSA", "BC");
        PrivateKey prvKey = f.generatePrivate(priKeySpec);
        PublicKey pubKey = f.generatePublic(pubKeySpec);

        BCECPrivateKey priv = (BCECPrivateKey) prvKey;
        BCECPublicKey pub = (BCECPublicKey) pubKey;

        System.out.println("pubX:" + pub.getQ().getX().toBigInteger().toString(16));
        System.out.println("pubY:" + pub.getQ().getY().toBigInteger().toString(16));

        System.out.println("Prvd:" + priv.getD().toString(16));
        //ECPrivateKeySpec =  new ECPrivateKeySpec()

        //0x65637572, 0x20612073, 0x68206F66, 0x20686173, 0x69732061, 0x68697320, 0x6F2C2054, 0x48616C6C
        BigInteger msg = new BigInteger("48616C6C6F2C205468697320697320612068617368206F662061207365637572", 16);
System.out.println("msg :"+msg.toString(16));
        Signature sig = Signature.getInstance("SHA256withECDSA", "BC");
//0x1D1E1F20, 0x191A1B1C, 0x15161718, 0x11121314, 0x0D0E0F10, 0x090A0B0C, 0x05060708, 0x01020304
        BigInteger rand1 = new BigInteger("0102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f20", 16);
        myrandom rnd = new myrandom(rand1);
        sig.initSign(prvKey, rnd); // always use the same pre-defined random number as seed
        sig.update(msg.toByteArray());
        byte[] signature = sig.sign();
        try {
            ASN1InputStream decoder = new ASN1InputStream(signature);
            DLSequence seq = (DLSequence) decoder.readObject();
            DERInteger r = (DERInteger) seq.getObjectAt(0);
            DERInteger s = (DERInteger) seq.getObjectAt(1);
            System.out.println("r: " + r.getValue().toString(16));
            System.out.println("s: " + s.getValue().toString(16));
            decoder.close();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }

        Signature ecdsaVerify = Signature.getInstance("SHA256withECDSA", "BC");
        ecdsaVerify.initVerify(pubKey);
        ecdsaVerify.update(msg.toByteArray());
        boolean result = ecdsaVerify.verify(signature);
        System.out.println(result);
        
        
        
        
        
        
        
        
        
        
        
        
        
        byte[] kData = new BigInteger("0102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f20",16).toByteArray();

        SecureRandom    k = new FixedSecureRandom(kData);

        ECDomainParameters params = new ECDomainParameters(ecSpec.getCurve(),ecSpec.getG(),ecSpec.getN());

        ECPrivateKeyParameters priKey = new ECPrivateKeyParameters(
            new BigInteger("41C1CB6B51247A144321435B7A80E714896A33BBAD7294CA401455A194A949FA",16), // d
            params);

        ParametersWithRandom param = new ParametersWithRandom(priKey, k);

        ECDSASigner ecdsa = new ECDSASigner();

        ecdsa.init(true, param);

        byte[] message = new BigInteger("48616C6C6F2C205468697320697320612068617368206F662061207365637572",16).toByteArray();
        BigInteger[] signat = ecdsa.generateSignature(message);
        
        //sig[0] ->r
        //sig[0] ->s
        System.out.println(signat[0].toString(16));
        System.out.println(signat[1].toString(16));
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        

        /* ECPoint ga = (ECPoint) ecSpec.getG();
        SecureRandom random = SecureRandom.getInstance("SHA1PRNG", "SUN");
        ECPoint qMultiply = null;
        BigInteger k = null;
        BigInteger px = null;
        BigInteger py = null;
        BigInteger sx = null;
        BigInteger sy = null;
        
        
        String var_name = "ecc_ECDSA_" + curve_name + "_";
        String var_namepx = var_name + "px_";
        String var_namepy = var_name + "py_";
        String var_namesx = var_name + "sx_";
        String var_namesy = var_name + "sy_";
        String var_namek = var_name + "k_";
        String var_nametab = var_name + "test_tab";
        
        String tablength = "uint32_t " + var_name + "tab_len=" + samples + ";";
        
        for (int i = 0; i < samples; ++i) {
        k = new BigInteger(ecSpec.getN().bitLength(), random);
        qMultiply = ga.multiply(k);
        px = ga.getX().toBigInteger();
        py = ga.getY().toBigInteger();
        k = new BigInteger(ecSpec.getN().bitLength(), random);
        qMultiply = ga.multiply(k);
        sx = qMultiply.getX().toBigInteger();
        sy = qMultiply.getY().toBigInteger();
        
        
        
        translate_bigint_and_write(k, var_namek + i);
        translate_bigint_and_write(px, var_namepx + i);
        translate_bigint_and_write(py, var_namepy + i);
        translate_bigint_and_write(sx, var_namesx + i);
        translate_bigint_and_write(sy, var_namesy + i);
        
        }
        add_to_header_file(tablength);
        add_to_header_file("bn_uint_t *" + var_nametab + "[" + samples + "][5]={");
        for (int i = 0; i < samples; ++i) {
        
        add_to_header_file("{&" + var_namepx + i + ",&" + var_namepy + i + ",&" + var_namek + i + ",&" + var_namesx + i + ",&" + var_namesy + i + "},");
        
        }
        add_to_header_file("};");*/

    }

    private static void generate_keys() throws NoSuchAlgorithmException {
        ECParameterSpec ecSpec = ECNamedCurveTable.getParameterSpec("secp256r1");
        System.out.println(ecSpec.getCurve().getA().toBigInteger().toString(16));
        System.out.println(ecSpec.getCurve().getB().toBigInteger().toString(16));
        //

        KeyPairGenerator g = null;
        try {
            g = KeyPairGenerator.getInstance("ECDH", "BC");
        } catch (NoSuchProviderException ex) {
            Logger.getLogger(Fixecc.class.getName()).log(Level.SEVERE, null, ex);
        }
        try {
            g.initialize(ecSpec, new SecureRandom());
        } catch (InvalidAlgorithmParameterException ex) {
            Logger.getLogger(Fixecc.class.getName()).log(Level.SEVERE, null, ex);
        }

        KeyPair pair = g.generateKeyPair();
        System.out.println(pair.getPrivate().toString());
        System.out.println(pair.getPublic().toString());
        //ecSpec.getCurve().createPoint(pair.getPublic()., true)

    }

    public static void main(String args[]) throws NoSuchAlgorithmException, NoSuchProviderException, InvalidAlgorithmParameterException, InvalidKeyException, SignatureException, UnsupportedEncodingException, IOException, InvalidKeySpecException {
        create_header_file(args[0]);
        generate_points_add_fixture("secp256r1", 10);
        generate_point_double_fixture("secp256r1", 10);
        generate_point_multiplication_fixture("secp256r1", 10);
        generate_ECDSA_fixture("secp256r1", 10);
        close_header_file();
    }
}