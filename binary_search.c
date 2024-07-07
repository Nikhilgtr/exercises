#include <stdio.h>


int main()
{
	int arr[] = {1,2,3,4,6,7,8,9,10};
	int start = 0;
	int end = (sizeof(arr)/sizeof(int)) - 1;
	printf("Size = %d and end idx = %d\n", sizeof(arr)/sizeof(int), end);
	int find = 4;
	int got_index = 0;
	int mid = 0;

	while(start <= end)
	{
		mid = start + (end - start)/2;

		if(arr[mid] == find)
		{
			got_index = mid;
			break;
		}else if(arr[mid] < find)
			start = mid + 1;
		else 
			end = mid - 1;
	}

	printf("find %d is at index %d  end %d\n", find, got_index, end);
}
