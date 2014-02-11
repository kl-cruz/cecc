#bin/bash
echo ""
echo "###########################################################################################################################################"
echo "#######################################################-> Generating new fixtures <-#######################################################"
echo "###########################################################################################################################################"
echo ""
echo "Generate new fixtures? (Y/N)"
read NEWFIX
FIXNUM="0";
cd ..
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
fi
echo ""
echo "###########################################################################################################################################"
echo "###########################################################-> Executing tests <-###########################################################"
echo "###########################################################################################################################################"
echo ""
echo "Please enter filename path to save record"
read FILENAME
if [ $NEWFIX = "Y" ]; then
	make file=$FILENAME target=posix fix_num=$FIXNUM test
else
	make file=$FILENAME target=posix test-nofixgen
fi

