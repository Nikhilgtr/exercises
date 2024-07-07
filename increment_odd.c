#include <stdio.h>

int main()
{
	int i, j = 1;
	for(i = 0; i < 15; i++, j+=2)
	{
		printf("%d\n",j);
	}
}
