#bin/bash
echo ""
echo "###########################################################################################################################################"
echo "#######################################################-> Generating new fixtures <-#######################################################"
echo "###########################################################################################################################################"
echo ""
echo "Generate new fixtures? (Y/N)"
read NEWFIX
FIXNUM="0";
if [ $NEWFIX = "Y" ]; then
	echo "How many tests for each function?"
	read FIXNUM
	while [ $FIXNUM -le 0 ] ; do
	    	if [ $FIXNUM = "0" ]; then
			echo "Cannot generate 0 tests. Use minimum value -> 1."
		fi
		echo "How many tests for each function?"
		read FIXNUM
	done
		
	
	echo "Generating $FIXNUM new tests for each function"
	java -jar `pwd`/fixture_generator_java/dist/fixture_generator.jar `pwd`/test_bignum_fixtures.h $FIXNUM
	java -jar `pwd`/ECC_fixture_generator/dist/ECC_fixture_generator.jar `pwd`/test_ecc_fixtures.h `pwd`/../186-3ecdsatestvectors/SigGen.txt $FIXNUM
fi
echo ""
echo "###########################################################################################################################################"
echo "###################################################-> Compile tests with new fixtures <-###################################################"
echo "###########################################################################################################################################"
echo ""
make target=posix clean
make target=posix
echo ""
echo "###########################################################################################################################################"
echo "###########################################################-> Executing tests <-###########################################################"
echo "###########################################################################################################################################"
echo ""
echo "Please enter filename to save record"
read FILENAME
.//build_posix/test_main >> $FILENAME
