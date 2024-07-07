#include <stdio.h>
#include <string.h>

static inline void swap(char *s1, char *s2)
{
	char temp;
	temp = *s1; 
	*s1 = *s2;
   	*s2 = temp;
}


int main(int argc, char *argv[])
{
	int len;
	int i;
	char src[100] = "Hello World";
    len = strlen(src);	

	printf("Before %s\n",src);
	
	for(i = 0; i < len/2; i++)
	{
		swap(&src[i], &src[len-i-1]);
	}
	printf("after %s\n",src);
	return 0;
}
