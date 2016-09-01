#!/bin/bash
echo "Installing Dependencies..."
echo
curl -sL https://deb.nodesource.com/setup_6.x | sudo -E bash -  > /dev/null
sudo apt-get install -y nodejs expect  > /dev/null
echo "Installing particle-cli..."
echo
sudo npm install -g particle-cli  > /dev/null
echo "Installing platformio..."
echo
sudo pip install -U platformio  > /dev/null
which particle
echo "Logging into particle-cli..."
echo
./particle-cli-login.sh $email $pass $PARTICLE_PATH  > /dev/null
