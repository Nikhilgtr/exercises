#include <stdio.h>
#include <string.h>
struct A
{
	const char *str;
	char *str2;
	int x;
};

int main()
{
	struct A a = {.str = "Hello", .str2 = "World", .x = 5};
	struct A *ptr;
	ptr = &a;
	if(ptr->x-- < 5)
		printf("x = %d\n",ptr->x);
	else
		printf("x = %d\n",ptr->x);


	printf("str = %s :: str2 = %s\n",ptr->str,ptr->str2);
}
