#!/bin/bash

tar -xf ncurses-6.3.tar.gz
cd ncurses-6.3/
./configure
make
if [[ "$OSTYPE" =~ ^msys ]]; then
    sudowin make install
else
    sudo make install
fi

cd ../
rm -rf ncurses-6.3*
