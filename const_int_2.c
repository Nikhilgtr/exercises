
#include <stdio.h>
   
int main(void)
{
     int const i = 10;
    const int *  ptr = &i;        
   
    printf("ptr: %d\n", *ptr);
  	//*ptr = 20; 
    printf("ptr: %d\n", *ptr);
    //ptr = &j;     /* error */
    //*ptr = 100;   /* error */
   
    return 0;
}
