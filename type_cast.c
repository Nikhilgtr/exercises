#include <stdio.h>

typedef struct a {
    int i;
    char str;
}A_t;

typedef struct b {
    int i;
    int x;
    int y;
}B_t;

int main()
{
    A_t *ptr;
    B_t var;

    var.y = 10;
    ptr = (B_t *) &var;
    printf("i = %d\n", ptr->y);
    ptr->y = 100;
    printf("i = %d\n", ptr->y);
    printf("i = %d\n", var.y);
}
