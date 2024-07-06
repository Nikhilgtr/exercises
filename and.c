#include <stdio.h>

enum val{T, F};

enum val tat;

int main()
{
    int x = 0;

    tat = (1<<0 | 1<<1);

    printf("0x%X and %d\n",tat,tat);
}
