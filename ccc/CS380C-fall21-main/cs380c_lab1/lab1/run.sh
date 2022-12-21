#!/usr/bin/env bash

# Script to run your translator.
mkdir -p c
for PROGRAM in collatz gcd hanoifibfac loop mmm prime \
    regslarge struct sort sieve
do
    ./translator < 3address/${PROGRAM}.3addr > c/${PROGRAM}.c
done