package Fixecc;

import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import org.bouncycastle.jce.ECNamedCurveTable;
import org.bouncycastle.jce.spec.ECParameterSpec;
import java.security.InvalidAlgorithmParameterException;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import java.math.BigInteger;
import java.security.KeyPair;
import java.security.KeyPairGenerator;
import java.security.SecureRandom;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.bouncycastle.math.ec.ECPoint;

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

    private static void generate_points_double_fixture(String curve_name, int samples) throws NoSuchAlgorithmException, NoSuchProviderException {
        ECParameterSpec ecSpec = ECNamedCurveTable.getParameterSpec(curve_name);
        ECPoint ga = (ECPoint) ecSpec.getG();
        SecureRandom random = SecureRandom.getInstance("SHA1PRNG", "SUN");
        ECPoint qMultiply = null;
        BigInteger k = null;
        BigInteger ax = null;
        BigInteger ay = null;
        BigInteger sx = null;
        BigInteger sy = null;


        String var_name = "ecc_points_double_" + curve_name + "_";
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

    public static void main(String args[]) throws NoSuchAlgorithmException, NoSuchProviderException {

        /* 
        //Test for TinyDTLS test values
        ecSpec = ECNamedCurveTable.getParameterSpec("secp256r1");
        System.out.println(ecSpec.getCurve().getA().toBigInteger().toString(16));
        System.out.println(ecSpec.getCurve().getB().toBigInteger().toString(16));
        
        BigInteger p = new BigInteger("ffffffff00000001000000000000000000000000ffffffffffffffffffffffff", 16);
        ECFieldElement.Fp tx = new ECFieldElement.Fp(p, new BigInteger("55a8b00f8da1d44e62f6b3b25316212e39540dc861c89575bb8cf92e35e0986b", 16));
        ECFieldElement.Fp ty = new ECFieldElement.Fp(p, new BigInteger("5421c3209c2d6c704835d82ac4c3dd90f61a8a52598b9e7ab656e9d8c8b24316", 16));
        ECFieldElement.Fp sx = new ECFieldElement.Fp(p, new BigInteger("de2444bebc8d36e682edd27e0f271508617519b3221a8fa0b77cab3989da97c9", 16));
        ECFieldElement.Fp sy = new ECFieldElement.Fp(p, new BigInteger("c093ae7ff36e5380fc01a5aad1e66659702de80f53cec576b6350b243042a256", 16));
        
        ECPoint.Fp t;// 
        ECPoint.Fp s;
        ECPoint r;
        t = new ECPoint.Fp(ecSpec.getCurve(), tx, ty);
        s = new ECPoint.Fp(ecSpec.getCurve(), sx, sy);
        r = t.add(s);
        System.out.println("p : " + p.toString(16));
        System.out.println("Tx: " + t.getX().toBigInteger().toString(16));
        System.out.println("Ty: " + t.getY().toBigInteger().toString(16));
        System.out.println("Sx: " + s.getX().toBigInteger().toString(16));
        System.out.println("Sy: " + s.getY().toBigInteger().toString(16));
        System.out.println("Rx: " + r.getX().toBigInteger().toString(16));
        System.out.println("Ry: " + r.getY().toBigInteger().toString(16));
         */
        create_header_file(args[0]);
        generate_points_add_fixture("secp256r1", 10);
        generate_points_double_fixture("secp256r1", 10);
        close_header_file();
    }
}