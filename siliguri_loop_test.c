#include <stdio.h>

int main()
{
	int i = 0;
	int k = 0;


	for(i = 0; i < 95;  i++)
	{
		if((i % 2) == 0) {
			printf("%d ->%d\n",k++, i);
			
		}
	}
	k = 0;
	for(i = 96; i < 192;  i++)
	{
		if((i % 2) == 0) {
			printf("%d ->%d\n",k++, i);
			
		}
	}
}
