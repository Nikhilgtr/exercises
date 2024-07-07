#include <stdio.h>

typedef struct {
	unsigned quotient;
	unsigned remainder;
} divider_s;

// Implement (with all possible error checks)
void divide(divider_s* answer, unsigned number, unsigned divide_by)
{
	if(NULL != answer) {
		if(0 != divide_by) {
			answer->quotient = number / divide_by;
			answer->remainder = number % divide_by;
		} else
			printf("Error can't divide by zero\n");
	}
}

int main()
{
	divider_s var = {0};
	divide(&var, 12, 15);
	printf("quo = %u, rem = %u\n", var.quotient, var.remainder);
}
