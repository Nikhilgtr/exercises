#include <stdio.h>
#include <string.h>

int main()
{
	char str[100] = "ANNDDDFDDDNNA";
	int len = strlen(str);
	int i;

	for(i = 0; i < len; i++)
	{
		if(str[i] != str[len - i -1]) {
			printf("Not palindrome\n");
			return 1;
		}
	}
	printf("Palindrome\n");
	return 0;
}

