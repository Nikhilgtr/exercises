#include <stdio.h>


int main()
{
    char x[6] = "Hello";
    char y[6];
    memcpy(&y, &x, 6);

    printf(" X = %s and Y = %s\n",x,y);
}
