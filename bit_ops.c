#include <stdio.h>


void main() {

    char x =0x00;

    x |= 1 << 0;
    printf("Bit is %x\n", x);
    x |= 1 << 1;
    printf("Bit is %x\n", x);
    x |= 1 << 2;
    printf("Bit is %x\n", x);
    
    //Removing bit
    //

    x = x & ~(1 << 2);
    printf("Bit is %x\n", x);

    x &= ~(1 << 1);
    printf("Bit is %x\n", x);
    x &= ~(1 << 0);
    printf("Bit is %x\n", x);

}

