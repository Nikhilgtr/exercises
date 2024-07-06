#include <stdio.h>

const int * get_int(void)
{
	const int num = 5;
	return &num;
}

int main()
{	
	int *x;
	x = (int *) get_int();
	printf("Val = %d\n",*x);
	return 0;
}
