// C++ code to add
// one to a given number
#include <stdio.h>

int addOne(int x)
{
	int m = 1;
	
	/*
	 *	if zeroth bit not set then just set it 
	 *	if zeroth bit is set then flip all bits and then set the zeroth bit
	 *
	 */

	while(x & m)
	{
		x = x ^ m;
		m = m << 1;
	}
	x = x ^ m;
	return x;
}

/* Driver program to test above functions*/
int main()
{
	printf("%d", addOne(13));
	return 0;
}

