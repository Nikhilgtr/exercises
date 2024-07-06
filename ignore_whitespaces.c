#include <stdio.h>
#include <string.h>
int main()
{
	char str[]="Hi N am e is ";
	char des[50];
	int i=0, len, count =0;
	len = strlen(str);

	while (i < len) { 

		if(str[i] != ' ')
			des[count++] = str[i];
		i++;
	}
	des[count] ='\0';
	printf("Des is %s\n",des);

	return 0;
}
