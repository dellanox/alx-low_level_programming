#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library
ar rcs liball.a *.o
