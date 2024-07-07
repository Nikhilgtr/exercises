#include <stdio.h>

#define A 1
#define B 2
#define C 3

int a()
{
	return A;
}
int b()
{
	return B;
}
int c()
{
	return C;
}


int main()
{
	int ret_val = 0;
	int rc = 0;
	rc = a();
	ret_val |= rc;
	rc = b();
	ret_val |= rc;
	rc = c();
	ret_val |= rc;

	printf("Ret value is %d and %X\n",ret_val,ret_val);
	return 0;
}
