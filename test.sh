#!/bin/bash
curl -sL https://deb.nodesource.com/setup_6.x | sudo -E bash -  > /dev/null
sudo apt-get install -y nodejs expect  > /dev/null
npm install -g particle-cli  > /dev/null
pip install -U platformio  > /dev/null
export PARTICLE_PATH="!(which particle)" > /dev/null
./particle-cli-login.sh $email $pass $PARTICLE_PATH  > /dev/null
