#include <stdio.h>

void func(char *str)
{
    printf("Str::%s\n",str);
}

int main()
{
    func("Hello""World");
}
