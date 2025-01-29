#include"Header/H.h"
#include "Hello/Hello.c"
#include "screen.h"
#define SC_H 
#define HELLO_H 

int main() {
	
	//Hello();
	//getchar();
	while (1) {
		usleep(500000);
		Desplay();
		for (int y = 0;y < 70;++y) {
			for (int x = 0; x < 100;++x) {
				printf("*");
			}
		}
		clear();
	}
		printf("\n");
	return 0;


}