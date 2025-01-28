 
#!/bin/sh
rm Setup 
clear
set -ex

gcc -o Setup source.c -lm -Wall -Wextra 

echo "Program Starte"
./Setup

echo "Program End "