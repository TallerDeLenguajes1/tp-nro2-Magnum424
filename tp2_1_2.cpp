#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5


int main(){
	int f, c, i;
	double mt [N][M];

	for (f = 0; f < 20; f++)
	{
		(*(&mt[0][0]  + f)) = rand()*100;	
	}

	for (i= 0; i < 20; i++)
	{
		printf("%lf ",(*(&mt[0][0] + i)));
		if (i%5 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}