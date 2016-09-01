#!/bin/bash
echo "Installing Dependencies..."
echo
curl -sL https://deb.nodesource.com/setup_6.x | sudo -E bash -
sudo apt-get install -y nodejs expect
echo "Installing particle-cli..."
echo
sudo npm install -g particle-cli serialport
echo "Installing platformio..."
echo
sudo -H pip install -U platformio
echo "Logging into particle-cli..."
echo
./particle-cli-login.sh $email $pass  > /dev/null
