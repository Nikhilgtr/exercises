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

int binary_search(int arr[], int start, int end, int element)
{
	int index = -1;
	int mid = 0;

	while(start<=end)
	{
		mid = start + (end - start) /2;
		if(arr[mid] == element)
		{
			index = mid;
			return index;
		}
		else if(arr[mid] >= element)
			end = mid - 1;
		else if(arr[mid] <= element)
			start = mid +1;
	}
	return index;
}


int main()
{
	int arr[] = {11,12,13,2,3,4,5,6};
	int size = sizeof(arr)/sizeof(int);
	int element = 13;
	int result = 0;
	int num_of_rotations = 0;
	printf("Size = %d\n", size);
	num_of_rotations = binary_search_number_of_rotation(arr, size);
	result = binary_search(arr, 0 ,num_of_rotations - 1, element);
	if(result != -1)
	{
		printf("element is at index %d\n", result);
		return 0;
	} else {
		printf("value is not in the first sorted array\n");
	}
	
	result = binary_search(arr, num_of_rotations ,size -1, element);
	if(result != -1)
	{
		printf("element is at index %d\n", result);
	} else {
		printf("value is not in the second sorted array\n");
	}
	return 0;
}
