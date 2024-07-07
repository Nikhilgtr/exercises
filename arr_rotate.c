#include <stdio.h>


int main()
{
	int i, j, arr[] = {1,2,3,4,5};
	int temp_a;
	int len = sizeof(arr)/sizeof(int);
	
	for(j = 0;  j < 1; j++) {
		temp_a = arr[0];
		for(i = 1; i < len; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[len -1] = temp_a;
	}
	for(i = 0; i < 5; i++)
		printf("%d ",arr[i]);
	printf("\n");

	return 0;
}
