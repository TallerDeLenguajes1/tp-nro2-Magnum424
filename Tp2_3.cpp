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
#define N 15
int main(void) {

	//setvbuf(stdout,NULL,_IONBF,0);
	//Defino un arreglo de punteros
	int * matriz[N];
	for (int i = 0; i < N; ++i)
	{
		//Asigno de forma dinamica la cantidad de columnas que habra por fila
		int numeroale = 5+rand()%11;
		matriz[i] = (int*) malloc(numeroale * sizeof(int));
		for (int j = 0; j < numeroale; ++j)
		{
			//Asigno valores a los espacios de la matriz
			matriz[j] = (int*) 100+rand()%10;
			printf("%d ",matriz[j]);
		}
	}
	return 0;
}
