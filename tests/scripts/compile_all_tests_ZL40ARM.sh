#bin/bash
echo ""
echo "###########################################################################################################################################"
echo "###########################################################-> Executing tests <-###########################################################"
echo "###########################################################################################################################################"
echo ""
IFS=$'\n' read -d '' -r -a lines < all_tests
cd ..
rm -r -f builds_zl040arm_tests
mkdir builds_zl40arm_tests
make target=zl40arm clean
for ((i=0; i<${#lines[@]}; i=i+1)); do
    	echo "Generating test for ${lines[i]}";
        rm targets/ZL40ARM/cfg_build.mk
        touch targets/ZL40ARM/cfg_build.mk
        echo "PROJECT = ${lines[i]}" >> targets/ZL40ARM/cfg_build.mk
        echo "UDEFS += -D${lines[i]}" >> targets/ZL40ARM/cfg_build.mk
        make target=zl40arm test-nofixgen
        cp build_zl40arm/${lines[i]}.hex builds_zl40arm_tests/${lines[i]}.hex
done
