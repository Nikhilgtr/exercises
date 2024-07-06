#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
#include <unistd.h>

sem_t s1; 

void * thread_1(void *data)
{
	while(1)
	{
		sem_wait(&s1);
		sleep(1);	
		printf("Thread 1\n");
		sem_post(&s1);
	}
	return NULL;
}

int main()
{
	sem_init(&s1, 0, 2); 
	pthread_t t1; 
	pthread_create(&t1,NULL,thread_1,NULL); 
	while(1)
	{
		sem_wait(&s1);
		sleep(1);	
		printf("Main\n");
		sem_post(&s1);
	}
	pthread_join(t1,NULL); 
	sem_destroy(&s1); 
	return 0;
}




