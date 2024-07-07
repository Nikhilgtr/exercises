#include <stdio.h>

#define MASK_BIT 2

int main()
{
	int mask = (1 << MASK_BIT + 1);
	mask = mask - 1;
	printf("val %x and mask %x\n", (mask << 5) & 0xab, mask);
}
