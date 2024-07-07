#include <stdio.h>

#define GET_BIT(arr,byte,bit) (((int *)arr)[byte] &( 0x01 << bit))

int main(int argc, char *argv[])
{
	int arr[250];
	arr[220] = 0xAA;
	int bit = atoi(argv[1]);
	if(GET_BIT(arr,220,bit))
		printf("True\n");
	else 
		printf("False\n");
	return 0;
}
