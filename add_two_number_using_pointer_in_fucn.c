#include <stdio.h>

void add(int *result,  int *a, int *b)
{
	*result = *a + *b;
}

int main()
{

	int result = 0, a = 4, b = 5;

	add(&result, &a, &b);

	printf("Result = %d\n", result);
}
