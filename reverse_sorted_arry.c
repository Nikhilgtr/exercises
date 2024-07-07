#include <stdio.h>


int main()
{
	int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
	int start = 0;
	int end = (sizeof(arr)/sizeof(int)) - 1;
	int find = 11;
	int got_index = 0;
	int mid = 0;
	printf("Size = %d and end idx = %d\n", sizeof(arr)/sizeof(int), end);


	while(start <= end)
	{
		mid = start + (end - start)/2;
		if(arr[mid] == find)
		{
			got_index = mid;
			break;
		}
		else if(find > arr[mid])
		{
			end = mid -1;
		}
		else
		{
			start = mid + 1;
		}
	}
	
	printf("find %d is at index %d\n", find, got_index);
}
