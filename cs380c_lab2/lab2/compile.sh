#!/usr/bin/env bash

# A script that builds your compiler.
set -ex
CONVERTERCPP=./converter/src/converter.cpp
CONVERTER=${CONVERTERCPP%%.cpp}

g++ -o $CONVERTER $CONVERTERCPP