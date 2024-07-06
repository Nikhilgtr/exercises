#include <string.h>
#include <stdio.h>
#define V "CISCO"

int main()
{
    char *str = "CISCO-INNOLIGHT";
    
    if(strncmp(str, V,strlen(V))) 
        printf("1\n");
        else
        printf("0\n");

        return 0;
}
