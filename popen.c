#include <stdio.h>

int main()
{
    FILE *file = popen("ls -l", "r");
    int c;
    while( (c = fgetc(file)) != EOF)
        printf("%c",(char)c);
    return 0;
}
