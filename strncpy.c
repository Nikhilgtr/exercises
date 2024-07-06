
#include <string.h>
#include <stdio.h>
int main(void)
{
	char src[1000] = "hi World";
	char dest[1000]; // no null terminator
	strncpy(dest, src,1000); // writes five characters 'h', 'i', '\0', '\0', '\0' to dest

	printf("STR::%s\n",dest);
}
