#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t arr[2] = { 0xfa, 0x45 };

    printf("val is %hd\n", (arr[0] << 8)|arr[1]);
}
