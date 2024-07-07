#include <stdio.h>
#include <stdlib.h>

int 
SumOfDigit(int num)
{
    num = abs(num);
    int rem = 0, sum = 0;
    while(num != 0) {
        rem = num % 10;
        num = num / 10;
        sum += rem;
    }
    return sum;
}

int main(int argc, char * argv[])
{
    int num = 123456789;
    printf("Sum Of Digit of %d is %d\n", num, SumOfDigit(num));
    return 0;
}
