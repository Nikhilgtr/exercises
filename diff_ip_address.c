#include <stdio.h>


int main()
{
	unsigned long count = 0;
	int i = 0, j = 0, k = 0, l = 0;
	for(i = 0 ; i < 0xff; i++) {
		for(j = 0 ; j < 0xff; j++) {
			for(k = 0 ; k < 0xff; k++) {
				for(l = 0 ; l < 0xff; l++) {
					//printf("%d.%d.%d.%d\n",i,j,k,l);
					count++;
				}
			}
		}
	}
	printf("%lu\n",count);
}
