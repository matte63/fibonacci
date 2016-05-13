#!/bin/bash

# Compile the program with -o option to specify the name of the binary
g++ src/code.cpp -o src/code

echo Loading...
sleep 1
clear

# If there were no compilation errors, run the program
if [[ $? -eq 0 ]]; then
		cd src/
        ./code
fi
