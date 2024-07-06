#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Lets suppoe to remove Vishal from Data
#define SIZE_OF_CHAR_TO_BE_REMOVE 5

int main()
{   
    const char *data = "VishalNikhilGupta";
    int len = 0;
    len =  strlen(data) - SIZE_OF_CHAR_TO_BE_REMOVE;
    char *final = (char *)malloc(len + 1);

    strcpy(final,&data[6]);
    printf("%s\n",final);

}
