#bin/bash
echo ""
echo "###########################################################################################################################################"
echo "###########################################################-> Executing tests <-###########################################################"
echo "###########################################################################################################################################"
echo ""
IFS=$'\n' read -d '' -r -a lines < all_tests
cd ..
rm -r -f stm32l053_nucleo_tests 
mkdir builds_stm32l053_nucleo_tests
make target=stm32l053_nucleo clean
for ((i=0; i<${#lines[@]}; i=i+1)); do
    	echo "Generating test for ${lines[i]}";
        rm targets/STM32L053_nucleo/cfg_build.mk
        touch targets/STM32L053_nucleo/cfg_build.mk
	echo "PROJECT = ${lines[i]}" >> targets/STM32L053_nucleo/build.mk
        echo "UDEFS += -D${lines[i]}" >> targets/STM32L053_nucleo/build.mk
	make target=stm32l053_nucleo test-nofixgen
	cp build_stm32l053_nucleo/${lines[i]}.hex stm32l053_nucleo_tests/${lines[i]}.hex
done
