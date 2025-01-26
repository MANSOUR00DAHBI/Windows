#ifndef HELLO_H
#define HELLO_H
//#include"../Header/H.h"
#define H_H

int Hello(void);
int c; // character 
int nc; // Counter Character  
#endif //Hello 

#ifdef HELLO_H

int Hello(void) {
	printf("Hello I'm Visual Studio 2022 \n");
	c = getchar();
	for (nc = 0;(c = getchar()) != '^';++nc);
	printf("Number Char : %3d \n",c);
	return 0;
}

#endif // HELLO_H
