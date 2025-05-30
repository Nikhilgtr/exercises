#include <stdio.h>

int calc_sum(int n)
{
	return (n/2 * (n + 1));
}

int main()
{
	int num = 3;
	printf("sum for %d is %d\n", num, calc_sum(num));

	return 0;
}
