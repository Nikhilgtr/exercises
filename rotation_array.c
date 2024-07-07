#include <stdio.h>

int main()
{
	int i = 0;

	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr)/sizeof(int);
	for(i = 0; i < 20; i++)
	{
		//printf("arr[%d] = %d\n", i % size, arr[i%size]);
	}

		i	= 0 ;
		printf("arr[%d] = %d\n", ((i - 1) + size) % size, arr[(i - 1 + size) %size]);
}
