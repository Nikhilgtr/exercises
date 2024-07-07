#include <stdio.h>
void print(unsigned char  *a)
{
	printf("a[0] = %x, a[1] = %x\n",((unsigned char *)a)[0], ((unsigned char *)a)[1]);
}
void aa(unsigned char *a)
{
	print(a);
}

void change(unsigned char *a)
{
	a[0] = 0xff;
	a[1] = 0xff;
}
void bb(unsigned char *a)
{
	change(a);
}


int main()
{
	unsigned char a[2] = {0xaa,0xbb};
	aa(a);
	bb(a);
	aa(a);
}

