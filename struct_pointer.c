#include <stdio.h>

typedef struct 
{
	int x;
	int y;
}a_t;

int main()
{
	a_t A = { .x = 10, .y = 20};
	a_t *var = NULL;

	var = &A;

	int *ptr = &(A.x);
	int *ptr2 = &(var->y);

	printf("x = %d\n", *ptr);
	printf("y = %d\n", *ptr2);
	return 0;
	
}
