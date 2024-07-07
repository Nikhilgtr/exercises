#include <stdio.h>


int main()
{
	//int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//int arr[] = {9};
	int start = 0;
	int end = (sizeof(arr)/sizeof(int)) - 1;
	int find = 10;
	int got_index = 0;
	int mid = 0;
	printf("Size = %d and end idx = %d\n", sizeof(arr)/sizeof(int), end);

	if(0 == end)
	{
		if(find == arr[end])
		{
			printf("find %d is at index %d\n", find, 0);
			return 0;
		}
		else {
			printf("no more field to search in\n");
			return 0;
		}
	}
	int is_asc = 0;
	if(arr[0] < arr[1])
		is_asc = 1;

	while(start <= end)
	{
		mid = start + (end - start)/2;
		if(arr[mid] == find)
		{
			got_index = mid;
			break;
		}
		else if(find < arr[mid])
		{
			if(is_asc)
				end = mid -1;
			else 
				start = mid + 1;
		}
		else
		{
			if(!is_asc)
				end = mid -1;
			else 
				start = mid + 1;
		}
	}
	
	printf("find %d is at index %d\n", find, got_index);
}
