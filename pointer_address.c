#include <stdio.h>

void a(int *ptr)
{
	printf("Address of ptr = %p in %s\n", ptr, __FUNCTION__);
	printf("Address of *ptr = %p in %s\n", &ptr, __FUNCTION__);
}

int main()
{
	int Var = 10;

	int *ptr = &Var;

	printf("Value of Var = %d\n", *ptr);

	printf("Address of Var = %p\n", ptr);
	printf("Address of *var = %p\n", &ptr);

	*ptr = 20; // Value at address is now 20
	a(ptr);
	printf("After doing *ptr = 20, *ptr is %d\n", *ptr);

	return 0;
}
