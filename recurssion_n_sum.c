#include <stdio.h>

int n_sum(int n);

int main()
{
	printf(" Number is %d\n", 10);
	printf("Sum is %d\n", n_sum(10));

	return 0;
}

int n_sum(int n)
{
	if(n != 0)
		return n + n_sum(n-1);
	else
		return n;

}
