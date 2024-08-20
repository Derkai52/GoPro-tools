#! /bin/bash

set -e
cd "$(dirname "$0")"

sudo apt-get install libcurl4-openssl-dev
sudo apt install libcjson1 libcjson-dev

# Install Conan packages
mkdir -p build
cd build
cmake ..
make
