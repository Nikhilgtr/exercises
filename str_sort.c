#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "hello";
	char tmp;
	int i;
	int j;
	int len; 

	len = strlen(str);

	for(i = 0; i < len-1; i++)
		for(j = i+1; j < len; j++)
		{
			if(str[i] > str[j])
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	printf("%s\n",str);

	return 0;
}
