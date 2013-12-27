#bin/bash
echo "##########-> AVAILABLE CPU STATES <-###########"
echo $(cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies)

echo "###############-> CURRENT CPU <-###############"
echo $(more /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor)
echo $(more /proc/cpuinfo | grep MHz)

echo "############-> TYPE YOUR CPU FREQ <-###########"
read freq
cpufreq-selector -c 0 -f $freq
cpufreq-selector -c 1 -f $freq
cpufreq-selector -c 2 -f $freq
cpufreq-selector -c 3 -f $freq
echo $cpustate > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

echo "##############-> NEW CPU FREQ <-##############"
echo $(more /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor)
echo $(more /proc/cpuinfo | grep MHz)
