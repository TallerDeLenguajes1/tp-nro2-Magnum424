/*
 ============================================================================
 Name        : Tp2_1_1.c
 Author      : Alejandro Nestor Arcucci
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5

int main(void) {

	setvbuf(stdout,NULL,_IONBF,0);
	int f,c;
	double mt[N][M];

	for(f = 0;f<N; f++){
		for(c = 0;c<N; c++){
			mt[f][c] = rand() % 100;
		}
		printf("\n" );
	}


	for(f = 0;f<N; f++){
		for(c = 0;c<N; c++){
			printf("%lf ", mt[f][c]);
		}
		printf("\n" );
	}

	return 0;
}
