#include <stdio.h>
#include <stdlib.h>


int main()
{
	int Buff[5] ={5,12,54,45,21};
	int *p,i;
	p = Buff;

	for (i = 0; i < 5; ++i)
	{
		printf("%d\n",Buff[i]);
		printf("%d\n",*(Buff + i));
		printf("%d\n",*(&Buff + i));
	}
	printf("%d\n",sizeof(Buff));
	return 0;
}