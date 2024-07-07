#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define MAX_THREADS 10

int primes[MAX_THREADS] = {11, 17, 67, 23, 31, 23, 234, 43, 64, 12};

void* routine(void *data) 
{
	int index = *(int*)data;
	int sum = 0;
	int i;
	for(i = 0; i < 5; i++) {
		sum += primes[index +i];
	}
	*(int *)data = sum;
	return data;
}

int main()
{
	pthread_t th[MAX_THREADS];
	int i;
	int global_sum = 0;
		
	for(i = 0; i<MAX_THREADS; i++) {
		int *a = NULL;
		a = (int *)malloc(sizeof(int));
		*a = 5*i;
		if(pthread_create(&th[i], NULL, &routine, (void *)a)) {
			perror("Thread create failed");
			return 1;
		}
	}	   
	int *res = NULL;
	for(i = 0; i<MAX_THREADS; i++) {
		if(pthread_join(th[i], (void**)&res)) {
			perror("Thread join failed");
			return 2;
		}
		global_sum += *res;
		free(res);
	}
	
	printf("Global sum is %d\n",global_sum);	
	return 0;
}   
