#include <stdio.h>

#define MAX_NUMBER 100

int main()
{

    int num = 0, jdx = 0;
    
    for(num = 1; num <= MAX_NUMBER; num++) {

        for(jdx = 2; jdx < num; jdx++)
        {
            if((num % jdx) == 0)
                break;
        }
        if(num == jdx)
            printf("%d is a prime number \n",num);
    }
}
