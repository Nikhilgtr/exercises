#include <stdio.h>

void sort(int *arr, int num_elem);
void insert_elem(int arr1[], int arr2[], int *arr3);
void printing_arr(int arr[]);

int main()
{
    int arr1 = {2,4,6,8};
    int arr2 = {1,3,5,7};
    int len_out = ((sizeof(arr1)/sizeof(*arr1)) +   \
            (sizeof(arr2)/sizeof(*arr2)));

    int arr_out[len_out];
    insert_elem(arr1,arr2,&arr_out);
    sort(&arr_out);
    printing_arr(arr_out);

}

void insert_elem(int arr1[], int arr2[], int *arr3)
{
    int len = ((sizeof(arr1)/sizeof(*arr1)) +   \
            (sizeof(arr2)/sizeof(*arr2)));


