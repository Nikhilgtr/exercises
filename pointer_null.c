#include <stdio.h>

int main()
{
    int *ptr = NULL;
    int x = 0;
    ptr = &x;

    if(ptr == NULL)
        printf("True\n");
    else
        printf("False\n");
    return;
}
