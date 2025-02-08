 
#!/bin/sh
 
clear
echo "Program Starte"
set -ex
gcc -o x64/Debug/Setup source.c -lm -Wall -Wextra 
gcc -o x64/Debug/cir circl.c -lm -Wall -Wextra 
gcc -o x64/Debug/cir2 circl2.c -lm -Wall -Wextra 
# gcc -o x64/Debug/cir3 circl3.c -lm -Wall -Wextra -mwindows
gcc -o x64/Debug/win couress.c -lm -Wall -Wextra 
gcc -o x64/Debug/mov mcons.c -lm -Wall -Wextra
gcc -o x64/Debug/key move.c -lm -Wall -Wextra 

echo "Program End "