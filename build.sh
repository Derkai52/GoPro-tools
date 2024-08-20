#! /bin/bash
set -e
cd "$(dirname "$0")"

# 下载依赖项
sudo apt-get install libcurl4-openssl-dev
sudo apt install libcjson1 libcjson-dev

# 构建并编译
mkdir -p build
cd build
cmake ..
make
