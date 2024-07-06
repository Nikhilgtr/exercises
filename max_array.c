#include <stdio.h>

#define ARR_SIZE(x) (sizeof(arr)/sizeof(*arr))

int main()
{
    int arr[] = {10,2,3,4,5,60};
    int i, max;
    max = arr[0];
    for(i = 0; i < ARR_SIZE(arr); i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    printf("Max is %d\n",max);
}
