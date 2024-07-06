#include <stdio.h>

#define INPUT 300
#define MAX 0xFF
#define MIN 0X0F

int main()
{

    if(!(MIN <= INPUT && INPUT <= MAX))
        printf("Error not proper\n");
    else
        printf("Success\n");
}

