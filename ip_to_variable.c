#include <stdio.h>
#include <string.h>

char ip_str[]="192.168.2.288";

void func_to_convert(const char *ip_str, int *ip)
{
    char* token = strtok(ip_str, ".");
    ip[0] = atoi(token);
    token = strtok(NULL, ".");
    ip[1] = atoi(token);
    token = strtok(NULL, ".");
    ip[2] = atoi(token);
    token = strtok(NULL, ".");
    ip[3] = atoi(token);
    token = strtok(NULL, ".");
}

int main()
{
    int ip[4];
    printf("%s\n", ip_str);
    func_to_convert(ip_str, ip);
    printf("%d.%d.%d.%d\n", ip[0], ip[1], ip[2], ip[3]);
}
