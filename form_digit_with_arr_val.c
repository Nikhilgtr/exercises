#include <stdio.h>

int main()
{
	int arr[]={4,3,1,2,5,4,3,4,0};
	int num = 0;
	int size = sizeof(arr)/sizeof(int);

	int i;

	for(i = 0; i<size ;i++)
	{
		if(arr[i] != 0)
		{
			num = (num * 10) + arr[i];
		}
	}
	printf("%d\n", num);
}
