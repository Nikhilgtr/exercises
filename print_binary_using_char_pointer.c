#include <stdio.h>

void print_bin_char_pointer(int num)
{
    int i = 0;
    int j = 0;
    
    for(i = 0; i < sizeof(int); i++)
    {
        char byte = ((char *)&num)[i];
        printf("Address[%d] --> %p\n",i,((char *)&num+i));
        for(j = 0; j < 8; j++)
        {
            if(byte & (1 << j))
                printf("1 ");
            else
                printf("0 ");
        } 
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int NumToConvert = 255;
    print_bin_char_pointer(NumToConvert);
    return 0;

}
