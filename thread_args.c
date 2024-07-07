#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define MAX_THREADS 10

int primes[MAX_THREADS] = {11, 17, 67, 23, 31, 23, 234, 43, 64, 12};

void* routine(void *data) 
{
	sleep(1);
	int index = *(int*)data;
	printf("%d ", primes[index]);
	free(data);
}

int main()
{
	pthread_t th[MAX_THREADS];
	int i;
	for(i = 0; i<MAX_THREADS; i++) {
		int *a = NULL;
		a = (int *)malloc(sizeof(int));
		*a = i;
		if(pthread_create(&th[i], NULL, &routine, (void *)a)) {
			perror("Thread create failed");
			return 1;
		}
	}	   
	for(i = 0; i<MAX_THREADS; i++) {
		if(pthread_join(th[i], NULL)) {
			perror("Thread join failed");
			return 2;
		}
	}
	printf("\n");	
	return 0;
}   
