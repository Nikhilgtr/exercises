#include <stdio.h>

int main()
{
	int group = 0;
	int i, j , start  = 0;
	for(group = 0; group < 4; group++) 
	{
		for(i = group *5; i <group * 5 + 5; i++)
		{
			printf("idx = %d and group = %d\n", i, group);
		}
				printf("\n\n");
	}
	return 0;
}
