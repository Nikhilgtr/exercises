#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void free_mem(void **ptr);
int main()
{
    char *str = NULL;

    str = (char *)malloc(100);
    if(str ==  NULL)
    {
        printf("ENOMEM\n");
    }
    strcpy(str,"Hello World");
    printf("str :: %s and %p\n", str, str);
    free_mem((void **)&str);
    if(str ==  NULL)
    {
        printf("Memory free successfully\n");
    }
    
}

void free_mem(void **ptr)
{
    free(*ptr);
    *ptr = NULL;
}
