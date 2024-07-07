#include <stdio.h>

int main()
{
	int val = 1004300;
	int num = 0;


	while(val > 0)
	{
		num = (num * 10) + val%10;
		val = val / 10;
	}
		
	printf("%d\n", num);
}
