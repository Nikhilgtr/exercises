#include <stdio.h>
#define SWAP(x)  ( (x & 0xF0) >> 4 | (x & 0x0F) << 4 )
//#define SWAP(x)  ( (x & 0x0F) << 4 | (x & 0xF0) >> 4 )
  
int main() 
{ 
	int x = 0xa6; 
	printf("Nibble is = %x\n", SWAP(x)); 
	return 0;
} 
