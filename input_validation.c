#include <stdio.h>
#include <stdint.h>

#define ARRAY_SIZE(x) sizeof(x)/sizeof(*x)

void input_val(uint16_t *data, uint16_t len);

int main()
{
    uint16_t arr[10];
    printf("array size is %d\n",ARRAY_SIZE(arr));
    input_val(arr,10);
    return 0;
}

void input_val(uint16_t *data, uint16_t len)
{
    if(ARRAY_SIZE(data) == len)
        printf("Data verified\n");
    else
        printf("Data is invalid and array size is %d\n",ARRAY_SIZE(data));
}
            
