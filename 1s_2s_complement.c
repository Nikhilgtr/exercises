#include <stdio.h>

/* function to print binary representation */
void print_binary(int num)
{
    int i;

    /* assuming 8-bit representation for demo */
    for (i = 7; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
}

/* function to calculate 1's complement */
int ones_complement(int num)
{
    return ~num;
}

/* function to calculate 2's complement */
int twos_complement(int num)
{
    return (~num + 1);
}

int main()
{
    int num;
    int one_c;
    int two_c;

    printf("Enter an integer (0 to 127 recommended): ");
    scanf("%d", &num);

    one_c = ones_complement(num);
    two_c = twos_complement(num);

    printf("\nOriginal Number: %d\n", num);
    printf("Binary          : ");
    print_binary(num);

    printf("\n\n1's Complement  : %d\n", one_c);
    printf("Binary          : ");
    print_binary(one_c);

    printf("\n\n2's Complement  : %d\n", two_c);
    printf("Binary          : ");
    print_binary(two_c);

    printf("\n");

    return 0;
}
