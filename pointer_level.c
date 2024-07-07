#include <stdio.h>

void func_a(int *ptr)
{
	printf("Address of ptr = %p in %s\n", ptr, __FUNCTION__);
	printf("Address of *ptr = %p in %s\n", &ptr, __FUNCTION__);
}

void func_b(int **ptr)
{
	printf("Address of ptr = %p in %s\n", ptr, __FUNCTION__);
	printf("Address of *ptr = %p in %s\n", &ptr, __FUNCTION__);
	func_a(*ptr);
	func_a(ptr);
}

int main()
{
	int Var = 10;

	int *ptr = &Var;

	printf("Value of Var = %d\n", *ptr);

	printf("Address of Var = %p\n", &Var);
	printf("Address of Var = %p\n", ptr);
	printf("Address of &ptr = %p\n", &ptr);

	func_a(ptr);
	func_b(&ptr);

	return 0;
}
