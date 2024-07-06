#include <stdio.h>
#include <stdlib.h>

struct A
{
	char name[120];
	int x;
};

int main()
{
    int i;
	struct A *var;
    var =  (struct A *) malloc(2 *sizeof(struct A ));
    for(i = 0; i< 2; i++)
    {
        strcpy(var[i].name, "Hello");
        var[i].x = 10;
    }
    
    for(i = 0; i< 2; i++)
    {
        printf("name = %s, x =%d\n",var[i].name, var[i].x);
    }
    
    
	return 0;


}
