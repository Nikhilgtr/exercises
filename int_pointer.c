#include <stdio.h>


void super_increasing_sum(int *ptr, int len)
{
	int sum = 0;
	int i = 0;
	for(i = 0; i < len; i++)
	{
		printf("sum %d, next val %d\n", sum, ptr[i+1]);
		if(sum > ptr[i+1])
		{
			printf("false\n");
			break;
		}
		sum += ptr[i];
	}
	printf("true\n");
}

int main()
{
	int arr[] = {1, 3, 6, 13, 27, 52};
	super_increasing_sum(arr, sizeof(arr)/sizeof(int));
}
