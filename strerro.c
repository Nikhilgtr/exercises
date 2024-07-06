#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int main()
{
    int fp;
    char buff[100];
    fp = open("/dev/iiiis",O_RDONLY);
    errno = 0;
    strerror_r(errno,buff,100);
    printf("str == %s and %s\n",strerror_r(errno,buff,100),buff);
}
