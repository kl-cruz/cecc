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
    public static String fixture_filename = "/home/cruz/Kodzenie/Projekty_uczelnia/Inz/cecc/tests/test_bignum_fixtures.h";
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
        String snumber = "";

        if ((number.compareTo(BigInteger.ZERO)) < 0) {
            BigInteger b = number;
            b = b.add(BigInteger.ONE.shiftLeft(len * 32));
            snumber = b.toString(16);
        } else {
            snumber = number.toString(16);
        }

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
        to_write += "};";
        add_to_header_file("//variable '" + var_name + "' value: 0x" + number.toString(16));
        add_to_header_file(to_write);
        add_to_header_file("bn_uint_t " + var_name + "= {.number = " + var_name + "_tab, .length = " + len + "};");
    }

    public static void randomize_abp(int bit_len) {
        Random rand = new Random();
        a = new BigInteger(bit_len, rand);
        b = new BigInteger(bit_len, rand);
        p = new BigInteger(bit_len, rand);
    }

    public static void add_list(int samples, int bit_len) {
        String var_name = "add_" + bit_len + "_";
        String var_namea = var_name + "a_";
        String var_nameb = var_name + "b_";
        String var_nameres = var_name + "res_";
        String var_nametab = var_name + "test_tab";
        String tablength = "uint32_t " + var_name + "tab_len=" + samples + ";";
        for (int i = 0; i < samples; ++i) {
            randomize_abp(bit_len);
            translate_bigint_and_write(a, var_namea + i);
            translate_bigint_and_write(b, var_nameb + i);
            translate_bigint_and_write(a.add(b), var_nameres + i);
        }
        add_to_header_file(tablength);
        add_to_header_file("bn_uint_t *" + var_nametab + "[" + samples + "][3]={");
        for (int i = 0; i < samples; ++i) {

            add_to_header_file("{&" + var_namea + i + ",&" + var_nameb + i + ",&" + var_nameres + i + "},");

        }
        add_to_header_file("};");
    }

    public static void sub_list(int samples, int bit_len) {
        String var_name = "sub_" + bit_len + "_";
        String var_namea = var_name + "a_";
        String var_nameb = var_name + "b_";
        String var_nameres = var_name + "res_";
        String var_nametab = var_name + "test_tab";
        String tablength = "uint32_t " + var_name + "tab_len=" + samples + ";";
        for (int i = 0; i < samples; ++i) {
            randomize_abp(bit_len);
            translate_bigint_and_write(a, var_namea + i);
            translate_bigint_and_write(b, var_nameb + i);
            translate_bigint_and_write(a.subtract(b), var_nameres + i);
        }
        add_to_header_file(tablength);
        add_to_header_file("bn_uint_t *" + var_nametab + "[" + samples + "][3]={");
        for (int i = 0; i < samples; ++i) {

            add_to_header_file("{&" + var_namea + i + ",&" + var_nameb + i + ",&" + var_nameres + i + "},");

        }
        add_to_header_file("};");
    }

    public static void add_mod_list(int samples, int bit_len) {
        String var_name = "add_mod_" + bit_len + "_";
        String var_namea = var_name + "a_";
        String var_nameb = var_name + "b_";
        String var_namep = var_name + "p_";
        String var_nameres = var_name + "res_";
        String var_nametab = var_name + "test_tab";
        String tablength = "uint32_t " + var_name + "tab_len=" + samples + ";";
        for (int i = 0; i < samples; ++i) {
            randomize_abp(bit_len);
            translate_bigint_and_write(a, var_namea + i);
            translate_bigint_and_write(b, var_nameb + i);
            translate_bigint_and_write(p, var_namep + i);
            translate_bigint_and_write((a.add(b)).mod(p), var_nameres + i);
        }
        add_to_header_file(tablength);
        add_to_header_file("bn_uint_t *" + var_nametab + "[" + samples + "][4]={");
        for (int i = 0; i < samples; ++i) {

            add_to_header_file("{&" + var_namea + i + ",&" + var_nameb + i + ",&" + var_namep + i + ",&" + var_nameres + i + "},");

        }
        add_to_header_file("};");
    }

    public static void sub_mod_list(int samples, int bit_len) {
        String var_name = "sub_mod_" + bit_len + "_";
        String var_namea = var_name + "a_";
        String var_nameb = var_name + "b_";
        String var_namep = var_name + "p_";
        String var_nameres = var_name + "res_";
        String var_nametab = var_name + "test_tab";
        String tablength = "uint32_t " + var_name + "tab_len=" + samples + ";";
        for (int i = 0; i < samples; ++i) {
            randomize_abp(bit_len);
            translate_bigint_and_write(a, var_namea + i);
            translate_bigint_and_write(b, var_nameb + i);
            translate_bigint_and_write(p, var_namep + i);
            translate_bigint_and_write((a.subtract(b)).mod(p), var_nameres + i);
        }
        add_to_header_file(tablength);
        add_to_header_file("bn_uint_t *" + var_nametab + "[" + samples + "][4]={");
        for (int i = 0; i < samples; ++i) {

            add_to_header_file("{&" + var_namea + i + ",&" + var_nameb + i + ",&" + var_namep + i + ",&" + var_nameres + i + "},");

        }
        add_to_header_file("};");
    }

    public static void shr_list(int samples, int bit_len) {
        String var_name = "shr_" + bit_len + "_";
        String var_namea = var_name + "a_";
        String var_nameres = var_name + "res_";
        String var_nametab = var_name + "test_tab";
        String tablength = "uint32_t " + var_name + "tab_len=" + samples + ";";
        for (int i = 0; i < samples; ++i) {
            randomize_abp(bit_len);
            translate_bigint_and_write(a, var_namea + i);
            translate_bigint_and_write(a.shiftRight(1), var_nameres + i);
        }
        add_to_header_file(tablength);
        add_to_header_file("bn_uint_t *" + var_nametab + "[" + samples + "][2]={");
        for (int i = 0; i < samples; ++i) {

            add_to_header_file("{&" + var_namea + i + ",&" + var_nameres + i + "},");

        }
        add_to_header_file("};");
    }
    
    public static boolean odd(BigInteger val) {
    if(!val.mod(new BigInteger("2")).equals(BigInteger.ZERO))
        return true;
    return false;
}

    public static void inv_mod_list(int samples, int bit_len) {
        String var_name = "inv_mod_" + bit_len + "_";
        String var_namea = var_name + "a_";
        String var_namep = var_name + "p_";
        String var_nameres = var_name + "res_";
        String var_nametab = var_name + "test_tab";
        String tablength = "uint32_t " + var_name + "tab_len=" + samples + ";";
        Boolean is_normal = false;
        for (int i = 0; i < samples; ++i) {
            is_normal = false;
            while (is_normal == false) {
                randomize_abp(bit_len);
                if(a.compareTo(p)>=0)
                        continue;
                if(!odd(p))
                        continue;
                try {
                    result = a.modInverse(p);
                    translate_bigint_and_write(a, var_namea + i);
                    translate_bigint_and_write(p, var_namep + i);
                    translate_bigint_and_write((a.modInverse(p)), var_nameres + i);
                    is_normal = true;
                } catch (Exception e) {
                    is_normal = false;
                }
            }
        }
        add_to_header_file(tablength);
        add_to_header_file("bn_uint_t *" + var_nametab + "[" + samples + "][3]={");
        for (int i = 0; i < samples; ++i) {

            add_to_header_file("{&" + var_namea + i + ",&" + var_namep + i + ",&" + var_nameres + i + "},");

        }
        add_to_header_file("};");
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        create_header_file(fixture_filename);

        add_list(10, 128);
        add_list(10, 256);

        sub_list(10, 128);
        sub_list(10, 256);

        add_mod_list(10, 128);
        add_mod_list(10, 256);

        sub_mod_list(10, 128);
        sub_mod_list(10, 256);

        shr_list(10, 128);
        shr_list(10, 256);

        inv_mod_list(10, 128);
        inv_mod_list(10, 256);

        close_header_file();
        //test code
       /* Boolean is_normal = false;
                while (is_normal == false) {
                randomize_abp(16);
                try {
                    if(a.compareTo(p)>=0)
                        continue;
                    if(((p.toByteArray()[0])<<8)==0)
                        continue;
                    result = a.modInverse(p);
                    System.out.println(a.toString(16)+" "+p.toString(16)+" "+result.toString(16));
                    is_normal = true;
                } catch (Exception e) {
                    is_normal = false;
                }
            }*/

    }
}
