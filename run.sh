#!/usr/bin/env bash
# Compile and run a solution.
# Usage: ./run.sh two-pointers/0015-3sum.cpp
set -euo pipefail
file="${1:?usage: ./run.sh <pattern>/<NNNN-problem>.cpp}"
g++ -std=c++17 -Wall -o sol "$file"
./sol
