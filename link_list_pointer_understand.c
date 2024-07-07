#include <stdio.h>
#include <stdlib.h>

int * alloc(int data)
{
	int *temp = NULL;
	temp = (int *) malloc(sizeof(int));
	*temp = data;
	return temp;
}

void all(int **a)
{
	*a = alloc(5);
}

int main()
{
	int *a = NULL; //100
	all(&a);
	if(a == NULL)
		return 1;
	printf(" a= %d\n",*a);
}	
