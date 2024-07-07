#include <stdio.h>

int main()
{

	int x = 5, y = 4;
	printf("Before x = %d and y = %d\n",x,y);
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("After x = %d and y = %d\n",x,y);
}
