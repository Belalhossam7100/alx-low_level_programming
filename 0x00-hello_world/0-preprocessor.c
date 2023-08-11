#!/bin/bash
# Run the preprocessor on the C file and save the result to a file named c
gcc -E $CFILE > c
