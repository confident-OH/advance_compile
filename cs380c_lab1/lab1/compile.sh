#!/usr/bin/env bash

# Script to compile your source
set -ex
CONVERTERCPP=./converter/src/converter.cpp
CONVERTER=${CONVERTERCPP%%.cpp}

g++ -o $CONVERTER $CONVERTERCPP