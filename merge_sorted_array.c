#include <stdio.h>

int main()
{
	int arr_0[] = {6,7,8,9};
	int arr_1[] = {1,5,8,10};
	int n1 = 4;
	int n2 = 4;
	int arr[20];

	int i = 0, j = 0, k = 0;

	while(i < n1 && j < n2)
	{
		if(arr_0[i] < arr_1[j])
		{
			arr[k++] = arr_0[i++];
		}
		else
		{
			arr[k++] = arr_1[j++];
		}
	}

	while(i < n1)
		arr[k++] = arr_0[i++];
	while(j < n2)
		arr[k++] = arr_1[j++];

	for(i = 0; i < n1+n2; i++)
			printf("%d \n", arr[i]);
}
