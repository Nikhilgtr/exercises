#include <stdio.h>


int main()
{
    int s,i,a;
    
    printf("Enter ");
    scanf("%d", &s);
    fflush(stdin);

    for(i = 0; i < 5;i++){
        printf("%d",s);
        printf("*");
        printf("%d",i);
        a=s*i;
        printf("=%d\n",a);

    }

}
