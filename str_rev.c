#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int len;
	int i;
	char src[100] = "Hello World";
	char dest[100];
    len = strlen(src);	
	for(i = 0;  src[i] != '\0'; i++)
	{
		dest[i] = src[len - 1 - i];
	}
	printf("src = %s and dest = %s\n",src,dest);
	return 0;
}
