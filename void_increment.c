#include <stdio.h>


int main()
{	
	int x[200];
	
	int i = 0;
	void *ptr = &x;
	
	for(i = 0; i < 200; i++)
		ptr = ptr+1;
	return 0;
}
