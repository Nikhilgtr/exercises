#include <stdio.h>
#include <stdint.h>


int main()
{
    uint32_t x = 0;
    while(0xFFFFFFFF-x) {
        x++;
        printf("%d\n",x);   
    }
}
