#include <stdio.h>

#define BIT_SET(byte,bit) 		((byte) |=  (1 << bit))
#define BIT_CLEAR(byte,bit) 	((byte) &= ~(1 << bit))
#define IS_BIT_SET(byte,bit) 	((byte) &   (1 << bit))
#define TOGGLE_BIT(byte,bit) 	((byte) ^=  (1 << bit))

int main()
{
	unsigned char num = 0;
	// set 5th bit

	num |= 1 << 4;
	num |= 1 << 5;
	num |= 1 << 6;

	num |= 1 << 7;

	printf("0x%X\n",num);

	// clear 5th bit 
	num = num & ~(1 << 4);
	num = num & ~(1 << 5);
	num = num & ~(1 << 6);
	num = num & ~(1 << 7);
	printf("0x%X\n",num);
	

	num ^= 1 << 4;
	printf("0x%X\n",num);
	num ^= 1 << 4;
	printf("0x%X\n",num);
}
