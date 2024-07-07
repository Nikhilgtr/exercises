#include <stdio.h>
#include <stdlib.h>

struct main {
	void *ctx;	
};

int main()
{
	struct main *var = NULL;
	var = (struct main *)malloc(sizeof(struct main));

	var->ctx =(int *) malloc(4);
	*((int *)var->ctx) = 4;
	printf("value =  %d\n",*((int *)var->ctx));
	free(var->ctx);
	free(var);
}
