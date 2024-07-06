#include <stdio.h>
#include <stdlib.h>

struct per {
    char Arr[100];
    int age;
};

void alloc(void** p) {
	
    struct per *H = (struct per *)p;
    H = (struct per *)malloc(sizeof(struct per));
    H->age = 14;
    *p = (void *)H;
}

int main(){
	void *p = NULL;
	alloc(&p);
	printf("%d\n",((struct per *)p)->age);//will print 10
	free(p);
	return 0;
}
