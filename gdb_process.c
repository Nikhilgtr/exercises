#include <stdio.h>
#include <string.h>

struct home {

    int hno;
    char name[50];
    int laneno;
    int pincode;
};

void insert_details(struct home ptr[], int count)
{
    int i;
    char buf_t[50];
    for(i = 0; i < count; i++)
    {
        ptr[i].hno = i;
        sprintf(buf_t,"House no -> %d",i);
        strcpy(ptr[i].name,buf_t);
        ptr[i].laneno = i+5;
        ptr[i].pincode = 200+i;
    }
}

void printing_details(struct home ptr[], int count)
{
    int i;
    for(i =0; i<count;i++)
    {
        printf("Hno -> %d ",ptr[i].hno);
        printf("Name -> %s ",ptr[i].name);
        printf("laneno -> %d ",ptr[i].laneno);
        printf("pincode -> %d\n",ptr[i].pincode);
    }
}

int main()
{
    struct home a[2];
    insert_details(a,2);
    printing_details(a,2);
}

