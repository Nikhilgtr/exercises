#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void get_daylight(char *str, char *des)
{
    memcpy(des, str, 3);   
}

void getting_time_token(char *str, int *time)
{
    int i = 0;
    char *token;
    token = strtok(str,":");
    while(token != NULL) {
        time[i++] = atoi(token);
        token = strtok(NULL, ":");
    }
   // printf("HH:MM:SS = %02d:%02d:%02d\n", time[0],time[1], time[2]);
}

void time_convert(const char *str)
{
    char *result;
    char daylight[3];
    int arr_time[3] = {0};

    result = (char *)malloc(25);
    strcpy(result, str);
    get_daylight(&result[8], daylight);
    result[8] = '\0';
    getting_time_token(result, arr_time);
    if(strcmp(daylight, "PM") ==0) {
        if(arr_time[0] >= 1 && arr_time[0] <= 11)
            arr_time[0] = 12 + arr_time[0];
       }
    else if (strcmp(daylight, "AM") ==0) {
         if (arr_time[0] == 12)
            arr_time[0] = 0;
    }
    printf("HH:MM:SS = %02d:%02d:%02d\n", arr_time[0], arr_time[1], arr_time[2]);
}

int main()
{
    char *str = "12:45:07AM";
    time_convert(str);   

}
