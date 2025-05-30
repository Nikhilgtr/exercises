#include <stdio.h>

int calc_sum(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int num = 6;
	printf("sum for %d is %d\n", num, calc_sum(num));

	return 0;
}
