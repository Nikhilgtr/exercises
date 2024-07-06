#include <stdio.h>

int main()
{

    if(1 != 2 || 1==32)
        printf("True\n");
    else
        printf("False\n");

    if(1 != 2 || 1==2 || 1 == 6 || 1== 1)
        printf("True\n");
    else
        printf("False\n");

}


