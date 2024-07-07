#include <stdio.h>

int main()
{
	int a, b, c;
	int n = 0;
	a = -1;
	b = 1;

//	printf("%d %d ",a,b);
	while(n < 10)
	{
		c=a+b;
		a = b;
		b = c;
		printf("%d ",c);
		n++;
	}
	printf("\n");
}
