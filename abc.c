#include <stdio.h>


int main()
{
    int i = 0;
    char *str = "Rajneesh";
    
    for(i = 0; i < strlen(str);i++)
    {
        printf("%c",str[i]);
        printf(" ");
    }   

    printf("\n");
}
