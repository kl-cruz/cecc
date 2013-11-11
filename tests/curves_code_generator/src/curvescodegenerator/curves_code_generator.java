/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package curvescodegenerator;

import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.math.BigInteger;
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

/**
 *
 * @author cruz
 */
public class curves_code_generator {

    /**/
    public static PrintWriter out = null;

    public static void create_header_file(String filename) {
        try {
            FileWriter outFile = new FileWriter(filename);
            System.out.println("Open file to write: " + filename);
            out = new PrintWriter(outFile);
            out.println("/*");
            out.println("File generate using external software");
            out.println("*/");
            out.println("#ifndef CURVES_H_");
            out.println("#define CURVES_H_");
            out.println("#include \"bignum.h\"");
            out.println("#include \"ecc.h\"");
            out.println("");
            /*out.println("typedef struct {");
            out.println("    const bn_uint_t *p;");
            out.println("    const bn_uint_t *a;");
            out.println("    const bn_uint_t *b;");
            out.println("    const bn_uint_t *S;");
            out.println("    const bn_uint_t *G;");
            out.println("    const bn_uint_t *n;");
            out.println("    const bn_uint_t *h;");
            out.println("    const bn_uint_t *barret_mi;");
            out.println("} ecc_curve_t;");
            out.println("");
            out.println("");*/

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
        out.println("#endif /* CURVES_H_ */");
        out.close();
        out = null;
    }

    public static void translate_bigint_and_write(BigInteger number, String var_name) {
        int len = (int) Math.ceil(number.toString(16).length() / 8.0);//(number.toString(16).length() / 8);
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

    public static void create_curve_code(String p, String a, String b, String S, String Gx, String Gy, String n, String h, String curve_name, int bit_len) {
        String var_name = "ec_" + curve_name;
        String var_namea = var_name + "_a";
        String var_nameb = var_name + "_b";
        String var_namep = var_name + "_p";
        String var_nameGx = var_name + "_Gx";
        String var_nameGy = var_name + "_Gy";
        String var_namen = var_name + "_n";
        String var_nameh = var_name + "_h";
        String var_nameS = var_name + "_S";
        String var_namemi = var_name + "_mi";
        String bt = "";
        int max_f = bit_len / 16;
        for (int r = 0; r < max_f; ++r) {
            bt += "ffffffff";
        }
        BigInteger bti = new BigInteger(bt, 16);
        BigInteger pi = new BigInteger(p, 16);
        BigInteger ai = new BigInteger(a, 16);
        BigInteger bi = new BigInteger(b, 16);
        BigInteger Gxi = new BigInteger(Gx, 16);
        BigInteger Gyi = new BigInteger(Gy, 16);
        BigInteger ni = new BigInteger(n, 16);
        BigInteger Si = new BigInteger(S, 16);
        BigInteger hi = new BigInteger(h, 16);

        translate_bigint_and_write(pi, var_namep);
        translate_bigint_and_write(ai, var_namea);
        translate_bigint_and_write(bi, var_nameb);
        translate_bigint_and_write(Gxi, var_nameGx);
        translate_bigint_and_write(Gyi, var_nameGy);
        translate_bigint_and_write(ni, var_namen);
        translate_bigint_and_write(hi, var_nameh);
        translate_bigint_and_write(Si, var_nameS);
        translate_bigint_and_write(bti.divide(pi), var_namemi);


        add_to_header_file("const ecc_curve_t " + var_name + " = {&" + var_namep + ", &" + var_namea + ", &" + var_nameb + ", &" + var_nameS + ", &" + var_nameGx + ", &" + var_nameGy + ", &" + var_namen + ", &" + var_nameh + ", &" + var_namemi + "};");
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        ECParameterSpec ecSpec = ECNamedCurveTable.getParameterSpec("secp256r1");

        create_header_file(args[0]);

        create_curve_code(
                /*p*/"FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF",
                /*a*/ "FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFC",
                /*b*/ "5AC635D8AA3A93E7B3EBBD55769886BC651D06B0CC53B0F63BCE3C3E27D2604B",
                /*S*/ "C49D360886E704936A6678E1139D26B7819F7E90",
                /*Gx*/ ecSpec.getG().getX().toBigInteger().toString(16),
                /*Gy*/ ecSpec.getG().getY().toBigInteger().toString(16),
                /*n*/ "FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC632551",
                /*h*/ "1", "secp256r1", 256);

        close_header_file();
    }
}
