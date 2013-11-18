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
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.security.KeyFactory;
import java.security.KeyPair;
import java.security.KeyPairGenerator;
import java.security.MessageDigest;
import java.security.SecureRandom;
import java.security.Signature;
import java.security.interfaces.ECPrivateKey;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.bouncycastle.asn1.ASN1InputStream;
import org.bouncycastle.asn1.ASN1Sequence;
import org.bouncycastle.asn1.DERInteger;
import org.bouncycastle.asn1.DLSequence;
import org.bouncycastle.asn1.nist.NISTNamedCurves;
import org.bouncycastle.asn1.x9.X9ECParameters;
import org.bouncycastle.crypto.params.ECDomainParameters;
import org.bouncycastle.crypto.params.ECPrivateKeyParameters;
import org.bouncycastle.crypto.params.ParametersWithRandom;
import org.bouncycastle.crypto.prng.FixedSecureRandom;
import org.bouncycastle.crypto.signers.ECDSASigner;
import org.bouncycastle.jcajce.provider.asymmetric.ec.BCECPrivateKey;
import org.bouncycastle.jcajce.provider.asymmetric.ec.BCECPublicKey;
import org.bouncycastle.jce.interfaces.ECPublicKey;
import org.bouncycastle.jce.spec.ECNamedCurveParameterSpec;
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

    private static void generate_ECDSA_fixture( String nist_test_vector_filename) throws NoSuchAlgorithmException, NoSuchProviderException, InvalidAlgorithmParameterException, InvalidKeyException, SignatureException, UnsupportedEncodingException, IOException, InvalidKeySpecException {

        /*     ECParameterSpec ecSpec = ECNamedCurveTable.getParameterSpec(curve_name);
        
        
        KeyPairGenerator g = KeyPairGenerator.getInstance("ECDSA", "BC");
        g.initialize(ecSpec, new SecureRandom());
        KeyPair pair = g.generateKeyPair();
        
        
        BCECPrivateKey priv = (BCECPrivateKey) pair.getPrivate();
        BCECPublicKey pub = (BCECPublicKey) pair.getPublic();
        
        System.out.println("pubX : " + pub.getQ().getX().toBigInteger().toString(16));
        System.out.println("pubY : " + pub.getQ().getY().toBigInteger().toString(16));
        
        System.out.println("Prvd : " + priv.getD().toString(16));
        //ECPrivateKeySpec =  new ECPrivateKeySpec()
        
        //0x65637572, 0x20612073, 0x68206F66, 0x20686173, 0x69732061, 0x68697320, 0x6F2C2054, 0x48616C6C
        String msg = "trzeba dokładnie przetestować ten skrót";
        
        MessageDigest md = MessageDigest.getInstance("SHA-256");
        
        byte[] hash = md.digest(msg.getBytes("UTF-8"));
        
        BigInteger bI = new BigInteger(1, hash);
        
        System.out.println("hash : " + bI.toString(16));
        
        BigInteger kd = null;
        kd = new BigInteger(ecSpec.getN().bitLength(), new SecureRandom());
        //kd=kd.mod(priv.getD());
        kd = kd.mod(ecSpec.getN());
        System.out.println("n    : " + ecSpec.getN().toString(16));
        byte[] kData = kd.toByteArray();
        System.out.println("k    : " + kd.toString(16));
        
        
        SecureRandom k = new FixedSecureRandom(kData);
        Signature sig = Signature.getInstance("SHA256withECDSA", "BC");
        sig.initSign(pair.getPrivate(), k); // always use the same pre-defined random number as seed
        sig.update(msg.getBytes("UTF-8"));
        byte[] signature = sig.sign();
        //System.out.println("signature: " + new BigInteger(signature).toString(16));
        try {
        ASN1InputStream decoder = new ASN1InputStream(signature);
        DLSequence seq = (DLSequence) decoder.readObject();
        DERInteger r = (DERInteger) seq.getObjectAt(0);
        DERInteger s = (DERInteger) seq.getObjectAt(1);
        System.out.println("r    : " + r.getValue().toString(16));
        System.out.println("s    : " + s.getValue().toString(16));
        decoder.close();
        } catch (IOException e) {
        throw new RuntimeException(e);
        }
        
        Signature ecdsaVerify = Signature.getInstance("SHA256withECDSA", "BC");
        ecdsaVerify.initVerify(pair.getPublic());
        ecdsaVerify.update(msg.getBytes("UTF-8"));
        boolean result = ecdsaVerify.verify(signature);
        System.out.println(result);
        
        
         */
        //hash a3f91ae21ba6b3039864472f184144c6af62cd0e
        /*translate_bigint_and_write(new BigInteger("1fe33950c5f461124ae992c2bdfdf1c73b1615f571bd567e60d19aa1f48cdf42", 16), "key_d");
        translate_bigint_and_write(new BigInteger("98de785daacf01567362273f54b1a1044259a9e9", 16), "hash1");
        translate_bigint_and_write(new BigInteger("ce45eac259171cf25ddbd621195515111c7b933de3d415f2a269648fa8b803d1", 16), "rand1");
        translate_bigint_and_write(new BigInteger("7c110c66dcfda807f6e69e45ddb3c74f69a1484d203e8dc5ada8e9a9dd7cb3c7", 16), "pubx");
        translate_bigint_and_write(new BigInteger("0df448986e51bde5d1576f99901f9c2c6a806a47fd907643a72b835597efc8c6", 16), "puby");*/

        /*NIST TESTING VECTOR:
        Msg = ac3275c33b54d4f5c4e9200191e525392e7b8f1c94f641e6bfe379ad44b88850efe76612f50652723a0eeeb1d6af1757761ab89a4ae177a04ff3af33cfc69d6bbfe7efe68ad268ff92c4385fd40f99bb2bcc3cba97a90b3db4055aadc3ad8d2d966219638afc2922e82e140a61238d90ad35cc322a3557e7a6d88010c74eb959
        d = 1fe33950c5f461124ae992c2bdfdf1c73b1615f571bd567e60d19aa1f48cdf42
        Qx = 7c110c66dcfda807f6e69e45ddb3c74f69a1484d203e8dc5ada8e9a9dd7cb3c7
        Qy = 0df448986e51bde5d1576f99901f9c2c6a806a47fd907643a72b835597efc8c6
        k = ce45eac259171cf25ddbd621195515111c7b933de3d415f2a269648fa8b803d1
        R = e4337061373d22d10f8b96888ebba55036096a4d39ba1566127ed894a914bf91
        S = 77792301bfaadc72334312a3fcaaea3bc2af5ec3065a526d04d467d07dce9851*/

        /* byte[] input = new BigInteger("ac3275c33b54d4f5c4e9200191e525392e7b8f1c94f641e6bfe379ad44b88850efe76612f50652723a0eeeb1d6af1757761ab89a4ae177a04ff3af33cfc69d6bbfe7efe68ad268ff92c4385fd40f99bb2bcc3cba97a90b3db4055aadc3ad8d2d966219638afc2922e82e140a61238d90ad35cc322a3557e7a6d88010c74eb959",16).toByteArray();
        
        //Create the static private key W from the Test Vector
        ECNamedCurveParameterSpec parameterSpec = ECNamedCurveTable.getParameterSpec("P-256");
        org.bouncycastle.jce.spec.ECPrivateKeySpec privateKeySpec = new org.bouncycastle.jce.spec.ECPrivateKeySpec(new BigInteger("1fe33950c5f461124ae992c2bdfdf1c73b1615f571bd567e60d19aa1f48cdf42", 16), parameterSpec);
        KeyFactory kf = KeyFactory.getInstance("EC");
        org.bouncycastle.jcajce.provider.asymmetric.ec.BCECPrivateKey spriv = (org.bouncycastle.jcajce.provider.asymmetric.ec.BCECPrivateKey) kf.generatePrivate(privateKeySpec);
        
        //Perfrom ECDSA signature of the data with SHA-256 as the hash algorithm
        Signature dsa = Signature.getInstance("SHA256withECDSA", "BC");
        SecureRandom random = new FixedSecureRandom(new BigInteger("ce45eac259171cf25ddbd621195515111c7b933de3d415f2a269648fa8b803d1",16).toByteArray());
        dsa.initSign(spriv, random);
        dsa.update(input);
        byte[] output = dsa.sign();
        
        // compare the signature with the expected reference values
        ASN1Sequence sequence = ASN1Sequence.getInstance(output);
        DERInteger r = (DERInteger) sequence.getObjectAt(0);
        DERInteger s = (DERInteger) sequence.getObjectAt(1);
        System.out.println("r:" +r.getValue().toString(16));
        System.out.println("s:" +s.getValue().toString(16));*/







        /* ECParameterSpec ecSpec = ECNamedCurveTable.getParameterSpec(curve_name);
        
        
        KeyPairGenerator g = KeyPairGenerator.getInstance("ECDSA", "BC");
        g.initialize(ecSpec, new SecureRandom());
        KeyPair pair = g.generateKeyPair();
        
        
        BCECPrivateKey priv = (BCECPrivateKey) pair.getPrivate();
        BCECPublicKey pub = (BCECPublicKey) pair.getPublic();
         */
        /*
        Msg = 600974e7d8c5508e2c1aab0783ad0d7c4494ab2b4da265c2fe496421c4df238b0be25f25659157c8a225fb03953607f7df996acfd402f147e37aee2f1693e3bf1c35eab3ae360a2bd91d04622ea47f83d863d2dfecb618e8b8bdc39e17d15d672eee03bb4ce2cc5cf6b217e5faf3f336fdd87d972d3a8b8a593ba85955cc9d71
        d = 4af107e8e2194c830ffb712a65511bc9186a133007855b49ab4b3833aefc4a1d
        Qx = a32e50be3dae2c8ba3f5e4bdae14cf7645420d425ead94036c22dd6c4fc59e00
        Qy = d623bf641160c289d6742c6257ae6ba574446dd1d0e74db3aaa80900b78d4ae9
        k = e18f96f84dfa2fd3cdfaec9159d4c338cd54ad314134f0b31e20591fc238d0ab
        R = 8524c5024e2d9a73bde8c72d9129f57873bbad0ed05215a372a84fdbc78f2e68
        S = d18c2caf3b1072f87064ec5e8953f51301cada03469c640244760328eb5a05cb
        
        
        
        
        
         */
       /* BigInteger msg = new BigInteger("600974e7d8c5508e2c1aab0783ad0d7c4494ab2b4da265c2fe496421c4df238b0be25f25659157c8a225fb03953607f7df996acfd402f147e37aee2f1693e3bf1c35eab3ae360a2bd91d04622ea47f83d863d2dfecb618e8b8bdc39e17d15d672eee03bb4ce2cc5cf6b217e5faf3f336fdd87d972d3a8b8a593ba85955cc9d71", 16);

        MessageDigest hash = MessageDigest.getInstance("SHA256");
        hash.update(msg.toByteArray());
        byte[] M = hash.digest();


        BigInteger d = new BigInteger("4af107e8e2194c830ffb712a65511bc9186a133007855b49ab4b3833aefc4a1d", 16);
        BigInteger kd = new BigInteger("e18f96f84dfa2fd3cdfaec9159d4c338cd54ad314134f0b31e20591fc238d0ab", 16);

        X9ECParameters p = NISTNamedCurves.getByName("P-256");
        ECDomainParameters params = new ECDomainParameters(p.getCurve(), p.getG(), p.getN(), p.getH());
        ECPrivateKeyParameters priKey = new ECPrivateKeyParameters(
                d, // d
                params);
        SecureRandom k = new FixedSecureRandom(BigIntegers.asUnsignedByteArray(kd));


        ECDSASigner dsa = new ECDSASigner();

        dsa.init(true, new ParametersWithRandom(priKey, k));

        BigInteger[] sig = dsa.generateSignature(M);



        System.out.println("hs:" + new BigInteger(1, M).toString(16));
        System.out.println("r :" + sig[0].toString(16));
        System.out.println("s :" + sig[1].toString(16));


        translate_bigint_and_write(d, "key_d");
        translate_bigint_and_write(new BigInteger(1, M), "hash1");
        translate_bigint_and_write(kd, "rand1");*/

        Path fFilePath = Paths.get(nist_test_vector_filename);
        Charset ENCODING = StandardCharsets.UTF_8;
        Scanner scanner = new Scanner(fFilePath, ENCODING.name());
        int i = 0;
        String hash_funct = "";
        String hash_f = null;
        String curve_n = null;
        String var_name = null;

        String fREGEXP = "\\[(.+),(.+)\\]";

        while (scanner.hasNextLine()) {
            //use a second Scanner to parse the content of each line 
            String line = scanner.nextLine();


            Pattern pattern = Pattern.compile(fREGEXP, Pattern.COMMENTS);
            Matcher matcher = pattern.matcher(line);
 
            while (matcher.find()) {
                if (var_name!=null) {
                    String tablength = "uint32_t " + var_name + "_tab_len=" + (i-1) + ";";
                    add_to_header_file(tablength);
                    add_to_header_file("bn_uint_t *" + var_name + "_tab" + "[" + (i-1) + "][7]={");
                    for (int j = 1; j <i; ++j) {

                        add_to_header_file("{&" + var_name+"_hash" + j + ",&" + var_name+"_d" + j + ",&" + var_name+"_Qx" + j + ",&" + var_name+"_Qy" + j + ",&" + var_name+"_k" + j + ",&" + var_name+"_R" + j + ",&" + var_name+"_S" + j + "},");

                    }
                    add_to_header_file("};");

                }
                curve_n = matcher.group(1);
                hash_f = hash_funct = matcher.group(2);
                curve_n = curve_n.replace('-', '_');
                hash_funct = hash_funct.replace('-', '_');
                var_name = curve_n + "_" + hash_funct;
                i = 0;
            }

            Scanner scannerl = new Scanner(line);
            scannerl.useDelimiter("=");
            if (scannerl.hasNext()) {
                //assumes the line has a certain structure
                try {
                    String name = scannerl.next();
                    String value = scannerl.next();
                    System.out.println(name);
                    if (name.equals("Msg ")) {
                        MessageDigest hashmsg = MessageDigest.getInstance(hash_f);
                        byte[] hm = Hex.decode(value);
                        hashmsg.update(hm);
                        hm = hashmsg.digest();
                        name = "hash";
                        value = new BigInteger(1, hm).toString(16);
                    }
                    translate_bigint_and_write(new BigInteger(value.trim(), 16), curve_n + "_" + hash_funct + "_" + name.trim() + i);

                } catch (Exception e) {
                }
            } else {
                ++i;

                // System.out.println("Empty or invalid line. Unable to process.");
            }
        }


        /* String var_name = "ecc_ECDSA_" + curve_name + "_";
        String var_namepx = var_name + "pubx_";
        String var_namepy = var_name + "puby_";
        String var_namer = var_name + "r_";
        String var_names = var_name + "s_";
        String var_namek = var_name + "k_";
        String var_named = var_name + "d_";
        String var_namehash = var_name + "hash_";
        String var_nametab = var_name + "test_tab";
        
        
        
        
        
        
        
        KeyPairGenerator g = KeyPairGenerator.getInstance("ECDSA", "BC");
        g.initialize(ecSpec, new SecureRandom());
        KeyPair pair = null;
        BCECPrivateKey priv = null;
        BCECPublicKey pub = null;
        BigInteger kd = null;
        BigInteger hash = null;
        
        for (int i = 0; i < samples; ++i) {
        kd = new BigInteger(ecSpec.getN().bitLength(), new SecureRandom());
        hash = new BigInteger(ecSpec.getN().bitLength(), new SecureRandom());
        System.out.println("k   :" + kd.toString(16));
        pair = g.generateKeyPair();
        priv = (BCECPrivateKey) pair.getPrivate();
        pub = (BCECPublicKey) pair.getPublic();
        
        
        byte[] kData = kd.toByteArray();
        
        SecureRandom k = new FixedSecureRandom(kData);
        
        ECDomainParameters params = new ECDomainParameters(ecSpec.getCurve(), ecSpec.getG(), ecSpec.getN());
        
        ECPrivateKeyParameters priKey = new ECPrivateKeyParameters(
        priv.getD(), // d
        params);
        
        ParametersWithRandom param = new ParametersWithRandom(priKey, k);
        
        ECDSASigner ecdsa = new ECDSASigner();
        
        ecdsa.init(true, param);
        
        byte[] message = hash.toByteArray();
        BigInteger[] signat = ecdsa.generateSignature(message);
        
        //sig[0] ->r
        //sig[1] ->s
        System.out.println(signat[0].toString(16));
        System.out.println(signat[1].toString(16));
        
        translate_bigint_and_write(priv.getD(), var_named + i);
        translate_bigint_and_write(pub.getQ().getX().toBigInteger(), var_namepx + i);
        translate_bigint_and_write(pub.getQ().getY().toBigInteger(), var_namepy + i);
        translate_bigint_and_write(signat[0], var_namer + i);
        translate_bigint_and_write(signat[1], var_names + i);
        translate_bigint_and_write(hash, var_namehash + i);
        
        translate_bigint_and_write(kd, var_namek + i);
        System.out.println("pubX:" + pub.getQ().getX().toBigInteger().toString(16));
        System.out.println("pubY:" + pub.getQ().getY().toBigInteger().toString(16));
        
        System.out.println("Prvd:" + priv.getD().toString(16));
        
        }
        String tablength = "uint32_t " + var_name + "tab_len=" + samples + ";";
        
        
        
        add_to_header_file(tablength);
        add_to_header_file("bn_uint_t *" + var_nametab + "[" + samples + "][7]={");
        for (int i = 0; i < samples; ++i) {
        
        add_to_header_file("{&" + var_namer + i + ",&" + var_names + i + ",&" + var_namehash + i + ",&" + var_namepx + i + ",&" + var_namepy + i + ",&" + var_namek + i + ",&" + var_named + i + "},");
        
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
        generate_ECDSA_fixture(args[1]);
        close_header_file();
    }
}