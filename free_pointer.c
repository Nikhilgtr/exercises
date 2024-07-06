#include <stdio.h>
#include <stdlib.h>

int input(char *s,int length);

int main()
{
    char *buffer;
    size_t bufsize = 32;
    size_t characters;

    printf("Type something: ");
    characters = getline(&buffer,&bufsize,stdin);
    printf("%zu characters were read.\n",characters);
    printf("You typed: '%s'\n",buffer);
    free(buffer);
    printf("erro
    return(0);
}
