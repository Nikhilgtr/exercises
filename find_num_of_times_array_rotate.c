#include <stdio.h>

int binary_search_number_of_rotation(int arr[], int size)
{
	int start = 0;
	int end = size- 1;
	int index = 0;
	int next = 0;
	int prev = 0;
	int mid = 0;
	while(start <= end)
	{
		mid = start + (end - start)/2;
		next = (mid + 1) % size;
		prev = ((mid - 1) + size) %size;
		if( arr[prev] >= arr[mid] && arr[mid] <= arr[next])
		{
			return mid;
		}
		else if(arr[start] < arr[mid])
		{
			start = mid +1;
		}
		else if(arr[end] > arr[mid])
		{
			end = mid - 1;
		}
	}
}

int main()
{
	int arr[] = {11,12,13,2,3,4,5,6};
	int size = sizeof(arr)/sizeof(int);
	printf("Size = %d\n", size);
	int num_of_rotations = 0;
	num_of_rotations = binary_search_number_of_rotation(arr, size);
	
	printf("number of rotation is %d\n", num_of_rotations); 
}
