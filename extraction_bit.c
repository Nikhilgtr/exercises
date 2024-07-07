#include <stdio.h>

int main()
{
    int num = 0xABCDEF;
    int extract = 0;

    extract = ((num & (0xFF <<0)) >> 0);

    printf("num     = 0x%X\n",num);
    printf("extract = 0x%X\n",extract);
}
