#include <stdio.h>

#define SWAP_NIBBLE(num) (num >> 4 & 0x0F | 0xF0 & num << 4)

int main()
{
	unsigned char num = 0;
	num =0xba;
	printf("%x \n",SWAP_NIBBLE(num));

}

