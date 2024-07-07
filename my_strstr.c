#include <stdio.h>
#include <string.h>

char * my_str_str(char *str, char *find)
{
	int i = 0;
	int j = 0;

	for(i = 0; i < strlen(str); i++)
	{
		for(j = 0; j < strlen(find); j++)
		{
			if(str[i+j] != find[j])
				break;
		}
		if(j == strlen(find))
		{
			printf("%d index \n",i);
			return &str[i];
		}
	}

}

int main()
{
	char *s = "abcdefg";
	char *f = "bc";
	char *ptr = NULL;

	ptr = my_str_str(s,f);

	if(ptr)
	{
		printf("%s\n", ptr);
	}
	return 0;
}

