#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int largest = 0;
	int second_largest = 0;
	int i = 0;
	int size = sizeof(arr)/sizeof(int);

	//let
	largest = arr[0];
	for(i = 1; i < size; i++)
	{
		if(largest < arr[i])
		{
			largest = arr[i];
		}
	}
	second_largest = arr[0];
	for(i = 1; i < size; i++)
	{
		if(arr[i] != largest)
		{
			if(arr[i] > second_largest)
			{
				second_largest = arr[i];
			}
		}
	}
	printf("largest number is %d\n", largest);
	printf("second largest number is %d\n", second_largest);

	return 0;
}
