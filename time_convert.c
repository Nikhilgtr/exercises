#include <stdio.h>

int main()
{
	int i;

	for(i = 0; i < 1000; i++)
	{
		printf("num = %d and divide = %d and mod = %d\n",i, i/32, i%32);
	}

}
