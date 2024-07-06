#include <stdio.h>

void
add(int *x)
{
    int itr = 10;
    while(--itr){
    (*x)++;
    printf("x = %d and itr = %d\n",*x,itr);
    }
}

int main()
{
    int num = 0;
    add(&num);
    printf("num = %d\n",num);
}
