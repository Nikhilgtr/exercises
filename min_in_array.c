#include <stdio.h>

int main()
{
	int min, i;
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	min = array[0];
	for(i = 0; i <10; i++)
	{
		if(min > array[i])
		min = array[i];
	}
	printf(" min is %d\n",min);

}
