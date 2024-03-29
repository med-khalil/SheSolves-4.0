#!/bin/bash

echo starting compilation...
g++ ./sol1_AC.cpp -O3 -o sol
echo compilation finished.

for filename in ./tests/*.in; do
    ./sol < $filename >"${filename%.in}.ans"
done

