#ifndef HELLO_H
#define HELLO_H
//#include"../Header/H.h"
#define H_H

#define MAXLINE 100 /* maximun input line size */

int c; // character 
int nc; // Contor Character input   
int nl/* contor line */, nw /* conter Word*/;
int max; /* maximun length seen so far */
char line[MAXLINE];/*current line input*/
char longest[MAXLINE];/*longest line saved here */

int Hello(void);
int get_char();


#endif //Hello 

#ifdef HELLO_H

int Hello(void) {
	for (size_t i = 0; i < 10; i++){
		printf("%zu\b\b\b", i);
		
		usleep(500000);
	}

	printf("\n\t Hello I'm Visual Studio\b \" /2022/ \" \n");

	c = getchar();
	for (nc = 0;(c = getchar()) != '^';++nc);
	printf("Number Char : %3d \n",c);
	return 0;
}

int get_char() {
	extern int c, nc, nw, nl;
	for(nc = 0 ;(c= getchar())!= EOF || != '^';++nc)
		if (c == '\n') {
			++nl;
		}
		else if (c == '\t' || c == '\n' || c == ' '){
			++nw;
		}
	return c;
}


#endif // HELLO_H
