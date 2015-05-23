#bin/bash
echo ""
echo "###########################################################################################################################################"
echo "######################################-> Configure environment for STM32 devices - cloning ChibiOS <-######################################"
echo "###########################################################################################################################################"
echo ""
cd ..
if [ ! -d "ExtraRepos" ]; then
  echo "Creating ExtraRepos directory"
  mkdir ExtraRepos
fi
cd ExtraRepos
git clone https://github.com/ChibiOS/ChibiOS.git
