#include <stdio.h>

union BitConv {
    int num;
    char bin[4];
};

void print_bin_union(union BitConv num)
{
    int i = 0;
    int j = 0;

    for(i = 0; i < sizeof(int); i++)
    {
        for(j = 0; j < 8; j++)
        {
            if(num.bin[i] & (1 << j))
                printf("1 ");
            else
                printf("0 ");
        } 
        printf(" ");
    }
    printf("\n");
}

int main()
{
    union BitConv num;
    num.num = 1024;
    print_bin_union(num);
    return 0;

}
