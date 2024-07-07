#include <stdio.h>

#define BIT_FLIP(num) (~num)

int main()
{
	unsigned char num = 5;
	printf("%X\n", BIT_FLIP(num));
	return 0;
}
