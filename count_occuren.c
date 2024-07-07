#include <stdio.h>


int binary_search_last_occurence(int arr[], int size, int element)
{
	int start = 0;
	int end = size- 1;
	int index = 0;
	int mid = 0;
	while(start <= end)
	{
		mid = start + (end - start)/2;
		if(arr[mid] == element)
		{
			index = mid;
			start = mid + 1;
		}
		else if(element < arr[mid])
		{
			end = mid -1;
		}
		else
		{
			start = mid + 1;
		}
	}
	//return last occur index	
	return index;
}

int binary_search_first_occurence(int arr[], int size, int element)
{
	int start = 0;
	int end = size- 1;
	int index = 0;
	int mid = 0;
	while(start <= end)
	{
		mid = start + (end - start)/2;
		if(arr[mid] == element)
		{
			index = mid;
			end = mid -1;
		}
		else if(element < arr[mid])
		{
			end = mid -1;
		}
		else
		{
			start = mid + 1;
		}
	}
	//return first occur index	
	return index;
}

int main()
{
	int arr[] = {2,3,4,5,5,5,5,5,5,6,7,7,7,8};
	int size = sizeof(arr)/sizeof(int);
	printf("Size = %d\n", size);
	int element = 7;
	int first_occur = 0;
	int last_occur = 0;

	first_occur = binary_search_first_occurence(arr, size, element);
	last_occur = binary_search_last_occurence(arr, size, element);
	
	printf("first occur of %d is %d\n", element, first_occur); 
	printf("last occur of %d is %d\n", element, last_occur); 

	printf("number of occur of %d is %d\n", element, (last_occur -first_occur) +1); 
}
