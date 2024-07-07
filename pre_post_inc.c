#include <stdio.h>

char *str = "abcdeh";

int main()
{
	int count = 6;
	while(--count && str[count])
		printf("%c %d\n",str[count], count);
	printf("\n");
	count = 6;
	while(count-- && str[count])
		printf("%c %d\n",str[count], count);
	printf("\n");
}
