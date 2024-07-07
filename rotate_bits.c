#include <stdio.h>

#define CHAR_BITS 8
#define CHAR_MASK 0xFF
#define ROTATE_LEFT(pos, data) (CHAR_MASK & ((data << pos)|(data >> (CHAR_BITS - pos))))
#define ROTATE_RIGHT(pos, data) (CHAR_MASK & ((data >> pos)|(data << (CHAR_BITS - pos))))

int main()
{
    int pos = 5; // Number of rotation
    unsigned char data = 10; //data which will be rotate
    printf("%d Rotate Left by %d is ", data, pos);
    printf("%d \n",ROTATE_LEFT(pos, data));
    printf("%d Rotate Right by %d is ",data, pos);
    printf("%d \n",ROTATE_RIGHT(pos, data));
    return 0;
}


