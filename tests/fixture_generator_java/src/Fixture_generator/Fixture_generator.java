/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Fixture_generator;

import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.math.BigInteger;
import java.util.Random;

/**
 *
 * @author cruz
 */
public class Fixture_generator {

    /**/
    public static String fixture_filename="/home/cruz/Kodzenie/Projekty_uczelnia/Inz/cecc/tests/test_bignum_fixtures.h";
    public static PrintWriter out = null;
    public static BigInteger a, b, c, d, p, result;

    public static void create_header_file(String filename) {
        try {
            FileWriter outFile = new FileWriter(filename);
            System.out.println("Open file to write: " + filename);
            out = new PrintWriter(outFile);
            out.println("/*");
            out.println("File generate using external software");
            out.println("*/");
            out.println("#ifndef TEST_BIGNUM_VALUES_H_");
            out.println("#define TEST_BIGNUM_VALUES_H_");
            out.println("#include \"bignum.h\"");
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
        out.println("#endif /* TEST_BIGNUM_VALUES_H_ */");
        out.close();
        out = null;
    }

    public static void translate_bigint_and_write(BigInteger number, String var_name) {
        int len = (int) Math.ceil(number.toString(16).length() / 8.0);//(number.toString(16).length() / 8);
        String snumber = number.toString(16);
        String to_write = "uint32_t " + var_name + "_tab [" + len + "] = {";
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
        /* if(i>0)
        to_write+=temp;*/
        to_write += "};";
        add_to_header_file("//variable '" + var_name + "' value: 0x" + number.toString(16));
        add_to_header_file(to_write);
        add_to_header_file("bn_uint_t " + var_name + "= {.number = " + var_name + "_tab, .length = " + len + "};");
    }

    public static void randomize_ab_and_write(String prefix, int bit_len) {
        Random rand = new Random();
        add_to_header_file("//" + prefix);
        a = new BigInteger(bit_len, rand);
        b = new BigInteger(bit_len, rand);
        translate_bigint_and_write(a, prefix + "_a");
        translate_bigint_and_write(b, prefix + "_b");
    }

    public static void randomize_ab(int bit_len) {
        Random rand = new Random();
        a = new BigInteger(bit_len, rand);
        b = new BigInteger(bit_len, rand);
    }

    public static void write_ab(String prefix) {
        add_to_header_file("//" + prefix);
        translate_bigint_and_write(a, prefix + "_a");
        translate_bigint_and_write(b, prefix + "_b");
    }

    public static void randomize_a_and_write(String prefix, int bit_len) {
        Random rand = new Random();
        add_to_header_file("//" + prefix);
        a = new BigInteger(bit_len, rand);
        translate_bigint_and_write(a, prefix + "_a");
    }

    public static void randomize_p_and_write(String prefix, int bit_len) {
        Random rand = new Random();
        p = new BigInteger(bit_len, rand);
        translate_bigint_and_write(p, prefix + "_p");
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        create_header_file(fixture_filename);

        //addition test for 128 bits
        randomize_ab_and_write("add128", 128);
        translate_bigint_and_write(a.add(b), "res_add128");

        randomize_ab_and_write("add256", 256);
        translate_bigint_and_write(a.add(b), "res_add256");

        randomize_ab_and_write("sub128", 128);
        if ((a.subtract(b).compareTo(BigInteger.ZERO)) < 0) {
            result = new BigInteger(1, a.subtract(b).toByteArray());
        } else {
            result = a.subtract(b);
        }
        translate_bigint_and_write(result, "res_sub128");

        randomize_ab_and_write("sub256", 256);
        if ((a.subtract(b).compareTo(BigInteger.ZERO)) < 0) {
            result = new BigInteger(1, a.subtract(b).toByteArray());
        } else {
            result = a.subtract(b);
        }
        translate_bigint_and_write(result, "res_sub256");

        randomize_ab_and_write("mul128", 128);
        translate_bigint_and_write(a.multiply(b), "res_mul128");

        randomize_ab_and_write("mul256", 256);
        translate_bigint_and_write(a.multiply(b), "res_mul256");

        randomize_ab_and_write("add_mod_p_128", 128);
        randomize_p_and_write("add_mod_p_128", 128);
        translate_bigint_and_write(a.add(b).mod(p), "res_add_mod_p_128");

        randomize_ab_and_write("add_mod_p_256", 256);
        randomize_p_and_write("add_mod_p_256", 256);
        translate_bigint_and_write(a.add(b).mod(p), "res_add_mod_p_256");

        randomize_ab_and_write("sub_mod_p_128", 128);
        randomize_p_and_write("sub_mod_p_128", 128);
        if ((a.subtract(b).mod(p).compareTo(BigInteger.ZERO)) < 0) {
            result = new BigInteger(1, a.subtract(b).toByteArray());
        } else {
            result = a.subtract(b).mod(p);
        }
        translate_bigint_and_write(result, "res_sub_mod_p_128");

        randomize_ab_and_write("sub_mod_p_256", 256);
        randomize_p_and_write("sub_mod_p_256", 256);
        if ((a.subtract(b).mod(p).compareTo(BigInteger.ZERO)) < 0) {
            result = new BigInteger(1, a.subtract(b).toByteArray());
        } else {
            result = a.subtract(b).mod(p);
        }
        translate_bigint_and_write(result, "res_sub_mod_p_256");
        
        Boolean is_normal = true;
        while (is_normal == false) {
            randomize_ab(128);
            try {
                is_normal = true;
                result=a.modInverse(p);
                write_ab("mod_inv_128");
                translate_bigint_and_write(result, "res_mod_inv_128");
            } catch (Exception e) {
                is_normal = false;
            }
        }
        
        while (is_normal == false) {
            randomize_ab(256);
            try {
                is_normal = true;
                result=a.modInverse(p);
                write_ab("mod_inv_256");
                translate_bigint_and_write(result, "res_mod_inv_256");
            } catch (Exception e) {
                is_normal = false;
            }
        }
        
 
        randomize_a_and_write("shr_128", 128);
        translate_bigint_and_write(a.shiftRight(1), "res_shr_128");

        randomize_a_and_write("shr_256", 256);
        translate_bigint_and_write(a.shiftRight(1), "res_shr_256");


        close_header_file();
        /*
        //variable 'sub_mod_p_128_a' value: 0x902c29dfc1ce4e849da566e24951da6a
        uint32_t sub_mod_p_128_a_tab [4] = {0x4951da6a, 0x9da566e2, 0xc1ce4e84, 0x902c29df};
        bn_uint_t sub_mod_p_128_a= {.number = sub_mod_p_128_a_tab, .length = 4};
        //variable 'sub_mod_p_128_b' value: 0xc57aad1f6bad74182d57b35b67aa1752
        uint32_t sub_mod_p_128_b_tab [4] = {0x67aa1752, 0x2d57b35b, 0x6bad7418, 0xc57aad1f};
        bn_uint_t sub_mod_p_128_b= {.number = sub_mod_p_128_b_tab, .length = 4};
        //variable 'sub_mod_p_128_p' value: 0x18aa3fb8f586950808f7f1e752b639cc*/
        /*    a = new BigInteger("5df2f5bd3d5b736e9e089553b1099b9a", 16);
        b = new BigInteger("a457fb5bc39b04f242e3ee69f221da8c", 16);
        c = new BigInteger("0", 16);
        d = new BigInteger("0", 16);
        p = new BigInteger("bb5823f4d9130f1237c6902043a4fc7e", 16);
        System.out.println("a*b");
        System.out.println(" a=0x" + a.toString(16));
        System.out.println(" b=0x" + b.toString(16));
        System.out.println("r=0x" + (a.multiply(b)).toString(16));
        System.out.println("-------------------------------------------------");
        System.out.println("a+b");
        System.out.println(" a=0x" + a.toString(16));
        System.out.println(" b=0x" + b.toString(16));
        System.out.println("r=0x" + (a.add(b)).toString(16));
        System.out.println("-------------------------------------------------");
        System.out.println("a+b mod p");
        System.out.println(" a=0x" + a.toString(16));
        System.out.println(" b=0x" + b.toString(16));
        System.out.println(" p=0x" + p.toString(16));
        System.out.println(" r=0x" + ((a.add(b)).mod(p)).toString(16));
        System.out.println("-------------------------------------------------");
        System.out.println("a+b mod p (2)");
        System.out.println(" a=0x" + a.toString(16));
        System.out.println(" b=0x" + b.toString(16));
        System.out.println(" p=0x" + p.toString(16));
        
        result = a.add(b);
        while (result.compareTo(p) > 0) {
        System.out.println("> -> r=0x" + result.toString(16));
        System.out.println("- -> p= 0x" + p.toString(16));
        result = result.subtract(p);
        }
        System.out.println(" r=0x" + result.toString(16));
        System.out.println("-------------------------------------------------");
        System.out.println("a-b");
        System.out.println(" a=0x" + a.toString(16));
        System.out.println(" b=0x" + b.toString(16));
        result = new BigInteger(1, a.subtract(b).toByteArray());
        System.out.println(" r=0x" + result.toString(16));
        System.out.println("-------------------------------------------------");
        System.out.println("b-a");
        System.out.println(" b=0x" + b.toString(16));
        System.out.println(" a=0x" + a.toString(16));
        result = new BigInteger(1, b.subtract(a).toByteArray());
        System.out.println(" r=0x" + result.toString(16));
        System.out.println("-------------------------------------------------");
        System.out.println("a-b mod p");
        System.out.println(" a=0x" + a.toString(16));
        System.out.println(" b=0x" + b.toString(16));
        System.out.println(" p=0x" + p.toString(16));
        System.out.println(" r=0x" + ((a.subtract(b)).mod(p)).toString(16));
        System.out.println("-------------------------------------------------");
        System.out.println("b-a mod p");
        System.out.println(" b=0x" + b.toString(16));
        System.out.println(" a=0x" + a.toString(16));
        System.out.println(" p=0x" + p.toString(16));
        System.out.println(" r=0x" + ((b.subtract(a)).mod(p)).toString(16));
        System.out.println("-------------------------------------------------");
        System.out.println("a^-1 mod p");
        System.out.println(" a=0x" + a.toString(16));
        System.out.println(" p=0x" + p.toString(16));
        //System.out.println(" r=0x" + (a.modInverse(p)).toString(16));
        System.out.println("-------------------------------------------------");
        System.out.println("a>>1");
        System.out.println(" a=0x" + a.toString(16));
        System.out.println(" r=0x" + (a.shiftRight(1)).toString(16));*/
    }
}
