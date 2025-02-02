#include <stdio.h>
int get_bitmask( char* key){
	int hash = 0 ;
	while(*key) hash+=(*key++);
	return hash ;
}

int transform(int c  , char* key ){
	int bitmask = get_bitmask(key);
	return ~c ^ bitmask;
}

int main(int arc , char* argv[]){
    int c ;
    while((c=getchar())!=EOF)
	    putchar(transform(c,argv[1]));

}

