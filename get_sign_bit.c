#include <stdio.h>

int main()
{
	int num = -119;
	if(num & 0x80000000)
		printf("set bit\n");

	return 0;
}
