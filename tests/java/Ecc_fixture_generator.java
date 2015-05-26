
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
import java.security.Security;
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
import org.bouncycastle.jce.provider.BouncyCastleProvider;
import org.bouncycastle.jce.spec.ECNamedCurveParameterSpec;
import org.bouncycastle.math.ec.ECFieldElement;
import org.bouncycastle.math.ec.ECPoint;
import org.bouncycastle.util.BigIntegers;
import org.bouncycastle.util.encoders.Hex;



/*
 * This project require BouncyCastle crypto lib to proper works 
 */
public class Ecc_fixture_generator {

    private SecureRandom secRand = new SecureRandom();
    public static PrintWriter out = null;
    public static final int time_msr=0;

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
        add_to_header_file("bn_uint_t " + var_name + " = {.number = " + var_name + "_tab, .length = " + len + "};");
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
            long start_time = System.nanoTime();
            qMultiply = ga.multiply(k);
            ax = ga.getX().toBigInteger();
            ay = ga.getY().toBigInteger();
            bx = qMultiply.getX().toBigInteger();
            by = qMultiply.getY().toBigInteger();
            qMultiply = ga.add(qMultiply);
            sx = qMultiply.getX().toBigInteger();
            sy = qMultiply.getY().toBigInteger();
            long end_time = System.nanoTime();
            if(time_msr==1){
                double difference = (end_time - start_time)/1e6;
                System.out.println("ecc_points_add time: "+difference+" ms");
            }


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
            long start_time = System.nanoTime();
            qMultiply = ga.multiply(k);
            ax = ga.getX().toBigInteger();
            ay = ga.getY().toBigInteger();
            qMultiply = ga.twice();
            sx = qMultiply.getX().toBigInteger();
            sy = qMultiply.getY().toBigInteger();
            long end_time = System.nanoTime();
            if(time_msr==1){
                double difference = (end_time - start_time)/1e6;
                System.out.println("ecc_point_double time: "+difference+" ms");
            }


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
            long start_time = System.nanoTime();
            qMultiply = ga.multiply(k);
            px = ga.getX().toBigInteger();
            py = ga.getY().toBigInteger();
            k = new BigInteger(ecSpec.getN().bitLength(), random);
            qMultiply = ga.multiply(k);
            sx = qMultiply.getX().toBigInteger();
            sy = qMultiply.getY().toBigInteger();
            long end_time = System.nanoTime();
            if(time_msr==1){
                double difference = (end_time - start_time)/1e6;
                System.out.println("ecc_point_mul time: "+difference+" ms");
            }



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
                    String tablength = "uint32_t " + var_name + "_tab_len=" + (i) + ";";
                    add_to_header_file(tablength);
                    add_to_header_file("bn_uint_t *" + var_name + "_tab" + "[" + (i) + "][7]={");
                    for (int j = 1; j <= i; ++j) {

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
                    //System.out.println(name);
                    if (name.equals("Msg ")) {
                        ++i;
                        MessageDigest hashmsg = MessageDigest.getInstance(hash_f);
                        byte[] hm = Hex.decode(value);
                        hashmsg.update(hm);
                        hm = hashmsg.digest();
                        name = "hash";
                        value = new BigInteger(1, hm).toString(16);
                    }
                    translate_bigint_and_write(new BigInteger(value.trim(), 16), curve_n + "_" + hash_funct + "_" + name.trim() + i);

                } catch (Exception e) {
                    if (e.getMessage() != null)
                        System.out.println(e.getMessage());
                }
            } else {

            }
        }
    }

    private static void generate_keys() throws NoSuchAlgorithmException {
        ECParameterSpec ecSpec = ECNamedCurveTable.getParameterSpec("secp256r1");
        System.out.println(ecSpec.getCurve().getA().toBigInteger().toString(16));
        System.out.println(ecSpec.getCurve().getB().toBigInteger().toString(16));
        //

        long start_time = System.nanoTime();
        KeyPairGenerator g = null;
        try {
            g = KeyPairGenerator.getInstance("ECDH", "BC");
        } catch (NoSuchProviderException ex) {
            Logger.getLogger(Ecc_fixture_generator.class.getName()).log(Level.SEVERE, null, ex);
        }
        try {
            g.initialize(ecSpec, new SecureRandom());
        } catch (InvalidAlgorithmParameterException ex) {
            Logger.getLogger(Ecc_fixture_generator.class.getName()).log(Level.SEVERE, null, ex);
        }

        KeyPair pair = g.generateKeyPair();
        long end_time = System.nanoTime();
        if(time_msr==1){
            double difference = (end_time - start_time)/1e6;
            System.out.println("ecc_key_gen time: "+difference+" ms");
        }
        System.out.println(pair.getPrivate().toString());
        System.out.println(pair.getPublic().toString());
        //ecSpec.getCurve().createPoint(pair.getPublic()., true)

    }

    public static void main(String args[]) throws NoSuchAlgorithmException, NoSuchProviderException, InvalidAlgorithmParameterException, InvalidKeyException, SignatureException, UnsupportedEncodingException, IOException, InvalidKeySpecException {
        create_header_file(args[0]);
        Integer how_many = Integer.parseInt(args[2]);
	System.out.println("Creating " + how_many.toString() + " fixtures");
        Security.addProvider(new BouncyCastleProvider());
        generate_points_add_fixture("secp256r1", how_many.intValue());
        generate_point_double_fixture("secp256r1", how_many.intValue());
        generate_point_multiplication_fixture("secp256r1", how_many.intValue());
        generate_ECDSA_fixture(args[1]);
        close_header_file();
    }
}
