
#include <pthread.h> 
#include <stdio.h> 
#include <stdlib.h> 

pthread_t ptid_1, ptid_2;
void* func_2(void* arg);
void* func_1(void* arg);

void* func_1(void* arg) 
{ 

    pthread_create(&ptid_2, NULL, &func_2, NULL); 
    while(1)
    {
        printf("Inside thread 1\n"); 
        sleep(1);
    }
} 

void* func_2(void* arg) 
{
    pthread_detach(pthread_self());  
    while(1)
    {
        printf("Inside thread 2\n"); 
        sleep(1);
    }
} 

int main() 
{ 
    pthread_create(&ptid_1, NULL, &func_1, NULL); 
    sleep(1);
    pthread_join(ptid_2, NULL);
    return 0; 
} 
