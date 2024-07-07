#include <time.h>
#include <sys/time.h>
#include <stdio.h>

int main() {
  struct timeval tv;
  time_t t;
  struct tm *info;
  char buffer[64];
 
  gettimeofday(&tv, NULL);
  t = tv.tv_sec;

  info = localtime(&t);
  strftime (buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S\n", info);
	printf("%s\n",buffer);
  return 0;
}
