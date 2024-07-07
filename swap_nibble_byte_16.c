#include <stdio.h>
#include <stdint.h>

int main()
{
	uint16_t num = 0xdead;
	num = (num & 0x00ff) << 8| (num & 0xff00) >> 8;
	printf("0x%x\n", num&0xffff);
	
	uint32_t num2 = 0xddeeaadd;
	num2 = (num2 & 0x0000ffff) << 16| (num2 & 0xffff0000) >> 16;
	printf("0x%x\n", num2&0xffffffff);
}

