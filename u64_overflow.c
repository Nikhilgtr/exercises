#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

int main()
{
    uint64_t res = 0;
    int count = 0;
    while(1) {
        res += 181162909U;
        count++;
        printf("i = %d\n",count);
        printf("Result = %llu \n",res);
        usleep(250);
        }
    }
