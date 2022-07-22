#!/bin/bash
gcc -Wall -Wextra -Werror -pendant -c *.c
ar rc liball.a *.o
