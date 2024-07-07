#include <stdio.h>

int main()
{
	off_t offset = 0x4848;
	char arr[2];
	arr[0] = offset & 0xFF;
	arr[1] = (offset >> 8);

	printf("ABCD = [0] %c and [1] %c\n",arr[0],arr[1]);
	return 0;
}

