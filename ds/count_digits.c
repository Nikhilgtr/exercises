#include <stdio.h>
#include <stdlib.h>

int sum_digits(int num)
{
	int sum = 0;
	while(num) {
		sum += num % 10;
		num = num / 10;
	}
	return sum;
}

int count_digits(int num)
{
	int count = 0;
	while(num) {
	   num % 10;
		num = num / 10;
		count++;
	}
	return count;
}

int main(int argc, char** argv)
{
	printf("digits in %s are %d\n", argv[1] ,count_digits(atoi(argv[1])));
}
