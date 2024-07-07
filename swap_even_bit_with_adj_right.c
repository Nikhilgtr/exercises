#include <stdio.h>

int main()
{
	unsigned char num = 45;
	int i = 0;
	num = ((num & 0xAA)>>1) | ((num &0x55) << 1);

	printf("%d\n", num);


}
