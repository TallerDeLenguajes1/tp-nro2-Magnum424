/*
 ============================================================================
 Name        : Tp2_3.c
 Author      : Alejandro Nestor Arcucci
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 999
#define M 100
#define C 15


int main(void) {

	setvbuf(stdout,NULL,_IONBF,0);
	int *matriz, i,x;
	matriz = (int*) malloc (C * sizeof(int));
	for (i = 0; i<5;++i){
		x = rand()%11 + 5;
		printf("%d\n",x);
	}

	return 0;
}
