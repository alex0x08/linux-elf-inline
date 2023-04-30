#!/usr/bin/env bash

mkdir Release
cd Release
cmake -DCMAKE_BUILD_TYPE=Release ..
make
gzip -f testapp
cat testapp.gz |base64 > out.base64
cat ../head.sh > final.sh
echo \" >> final.sh
cat out.base64 >> final.sh
echo \" >> final.sh
chmod +x ./final.sh

