#include <string.h>
#include <stdio.h>
#include <stdlib.h>


void mal(char **str)
{
    char *des =NULL;
     des = (char *)malloc(5);
    strcpy(des,"Hel");
    *str = des;
}
int main()
{
    char *ptr;  
    
    mal(&ptr);
    printf("%s \n",ptr);
    return 0;
}
