#bin/bash
IFS=' ' read -a states <<< $(echo $(cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies))

echo "##############-> CURRENT CPU SETTINGS<-##############"
echo $(more /proc/cpuinfo | grep MHz)
echo $(nproc) cores available

echo "############-> CHOOSE DESIRED FREQUENCY <-###########"
echo "Available frequencies"
i=1
for element in "${states[@]}"
do
    echo "$i) $element MHz"
    ((i++))
done
echo "Please type index of desired frequency"
i=${#states[@]}

read freq

while (( freq < 1 )) || (( freq > $i )) ; do
		echo "You choose wrong number."
		echo "Please type index of desired frequency"
		read freq
	done
((freq--))
for (( i=0; i<$(nproc); i++ ))
do
   cpufreq-selector -c $i -f ${states[freq]}
done
echo "#################-> NEW CPU FREQ <-##################"
echo $(more /proc/cpuinfo | grep MHz)
