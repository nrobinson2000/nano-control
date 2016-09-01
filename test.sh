curl -sL https://deb.nodesource.com/setup_6.x | sudo -E bash -
sudo apt-get install -y nodejs
sudo apt-get install nodejs expect
npm install -g particle-cli
pip install -U platformio
export PARTICLE_PATH=!(which particle)
./particle-cli-login.sh $email $pass $PARTICLE_PATH  > /dev/null
