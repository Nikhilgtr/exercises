#include <stdio.h>

int main()
{
	int max, i;
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	max = array[0];
	for(i = 0; i <10; i++)
	{
		if(max < array[i])
			max = array[i];
	}
	printf(" Max is %d\n",max);

}
