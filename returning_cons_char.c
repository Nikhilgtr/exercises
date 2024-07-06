#include <stdio.h>
#include <string.h>
#include <stdlib.h>


const char * ret_str(void)
{

	const char str[] = "Hello";
	return str;
}

int main()
{
	printf("String :: %s\n",ret_str());

}

