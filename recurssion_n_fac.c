#include <stdio.h>

int n_fac(int n);

int main()
{
	printf(" Number is %d\n", 10);
	printf("Sum is %d\n", n_fac(10));

	return 0;
}

int n_fac(int n)
{
	if(n != 0)
		return n * n_fac(n-1);
	else
		return n;

}
