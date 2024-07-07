#include <stdio.h>

int main(void)
{
	//char num = 0xa;
	char num = 0x42;
	printf("res = %x\n", num&0xff);
	num = ~num;
	printf("res = %x\n", num&0xff);
	num = num + 1;
	printf("res = %x\n", num&0xff);

}
