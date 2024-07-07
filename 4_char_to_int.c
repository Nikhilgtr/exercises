#include <stdio.h>

void
CharsToInt(unsigned int *num, unsigned char data[])
{
    int i;
    for(i = 0; i<4; i++)
        *num |= data[i] << 8*i;
}

int main() 
{

    unsigned char char_data[4] = {0xAB, 0xCD, 0xEF, 0xAB};
    unsigned int int_data = 0, i = 0;

    CharsToInt(&int_data, char_data);

    printf("\nChar data = "); 
    while(i<4) {
        printf("0x%hhX ", char_data[i]);
        i++;
    } 
    printf("\nInt data = 0x%X \n", int_data);

    return 0;
}

