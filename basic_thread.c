#include <stdio.h>
#include <pthread.h>

void * get_string_thread(void *data)
{
    const char *string = "This is new thread";
    return (void *)string;
}

int main()
{
    pthread_t t1;
    char *string = NULL;

    if(pthread_create(&t1, NULL, get_string_thread, NULL)) {
        perror("Thread create fail");
        return 1;
    }
    if(pthread_join(t1, (void *)&string)) {
        perror("Thread join fail");
        return 2;
    }
    printf("string = %s\n",string);
    return 0;
}

