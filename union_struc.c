#include <string.h>

union a {

    char b[20];
    char c;
};

union a var;

void main()
{
    strcpy(var.b,"Hello");
    printf("Char = %c\n",var.c);
}
