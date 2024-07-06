#include <stdio.h>

int main()
{
    int combine_ver = 0x3EABCD;
    int a,b,c;

    a = (combine_ver & 0xFF0000) >> 16;
    b = (combine_ver & 0x00FF00) >> 8;
    c = (combine_ver & 0xFF);

    printf("Combine = 0x%X, A = 0x%X, B = 0x%X, C = 0x%X\n",combine_ver, a,b,c); 

    a = (combine_ver) >> 16;
    b = (combine_ver) >> 8;
    c = (combine_ver & 0xFF);

    printf("Combine = 0x%X, A = 0x%X, B = 0x%X, C = 0x%X\n",combine_ver, a,b,c); 
}
