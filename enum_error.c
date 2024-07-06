#include <stdio.h>

typedef enum error {GOOD, FAULT}error_c;

error_c what(void);
int main()
{
	if(what() == FAULT)
		printf("Error\n");
	
	return 0;
}

error_c what(void)
{
	return FAULT;
}
