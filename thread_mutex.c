#include <stdio.h>
#include <pthread.h>

long long collab_add;
pthread_mutex_t lock; 

void*
add_with_thread(void *data)
{
	long long i;
	for(i = 0; i<1000000; i++) {
		pthread_mutex_lock(&lock);
		collab_add++;
		pthread_mutex_unlock(&lock);
	}
}

int main()
{
    pthread_t tid[5];
	int num_of_thread = 0;
	if(pthread_mutex_init(&lock,NULL))
	{
		perror("Lock init failed");
		return 3;
	}
	for( ;num_of_thread<5 ;num_of_thread++) {
		if(pthread_create(&tid[num_of_thread], NULL, add_with_thread, NULL)) {
			perror("Thread create fail");
			return 1;
		}
	}
	for(num_of_thread = 0 ;num_of_thread < 5; num_of_thread++) {

		if(pthread_join(tid[num_of_thread], NULL)) {
			perror("Thread join fail");
			return 2;
		}
	}

	if(pthread_mutex_destroy(&lock))
	{
		perror("Lock init failed");
		return 3;
	}
	printf("Final add = %llu\n", collab_add);
	return 0;
}

