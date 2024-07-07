#include <stdio.h>


int main()
{
	unsigned char num = 0xff;
	printf("value = %x\n", (num & ~(0x7 << 3)));
}
