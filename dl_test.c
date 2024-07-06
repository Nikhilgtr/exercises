#include <stdio.h>
#include <dlfcn.h>
#include <pthread.h>

int main(int argc, char * argv[])
{
        void *handle;
        dlerror();
        handle = dlopen (argv[1], RTLD_LAZY);
        if (!handle) {
            fputs (dlerror(), stderr);
            printf("\n");
            return -1;
        }
    printf("done\n");

}
