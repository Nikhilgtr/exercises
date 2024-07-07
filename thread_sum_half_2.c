#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define MAX_THREADS 2

int primes[10] = {11, 17, 67, 23, 31, 23, 234, 43, 64, 12};
int global_sum = 0;
pthread_mutex_t lock;

void* routine(void *data) 
{
	int index = *(int*)data;
	int i;
	for(i = 0; i < 5; i++) {
		pthread_mutex_lock(&lock);
		global_sum += primes[index +i];
		pthread_mutex_unlock(&lock);
	}
	free(data);
	return NULL;
}

int main()
{
	pthread_t th[MAX_THREADS];
	int i;
	
	if(pthread_mutex_init(&lock,NULL))
	{
		perror("Lock init failed");
		return 3;
	}
		
	for(i = 0; i<MAX_THREADS; i++) {
		int *a = NULL;
		a = (int *)malloc(sizeof(int));
		*a = 5*i;
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
	if(pthread_mutex_destroy(&lock))
	{
		perror("Lock init failed");
		return 3;
	}
	
	printf("Global sum is %d\n",global_sum);	
	return 0;
}   
