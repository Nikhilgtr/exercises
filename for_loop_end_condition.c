#include <stdio.h>
#include <unistd.h>
int main() 
{
	int softport_recal[8] = {0};
	int idx = 0;
	for(;;) {
		if(softport_recal[idx] != 5){
			if(softport_recal[idx] <= 5)
				softport_recal[idx] += 1;
		}
		else
			softport_recal[idx] = 0;
		printf("idx = %d and recal = %d\n",idx, softport_recal[idx]);
		if(idx == 8-1) idx = 0;
		else idx++;
	}
	return 1;
}
