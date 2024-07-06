#include <stdio.h>
#include <string.h>

char c[10] = { 'a', 'b' };

void myfunc(char **A)
{
    memcpy(c+2, *A+2, 6);
}

int
main(void)
{
    char *A = "ABCDEFIJK";
    printf("Before: %s\n", c);
    myfunc(&A);
    printf("After : %s\n", c);
    return 0;
}
