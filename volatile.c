#include <stdio.h>

int main()
{	
	unsigned char x = 0xF0;

 	volatile unsigned char * ptr = (unsigned char *)&x;
	
	printf("Val = %x\n",++(*ptr));


	return 0;
}
