#include <stdio.h>

#define SIZE_ARR(arr) (sizeof(arr)/sizeof(*arr))

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void print_arr(int arr[], int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int get_largest(int arr[], int size)
{
	int largest = 0;
	int i;

	for (i = 1; i < size; i++)
		if (arr[largest] < arr[i])
			largest = i;
	return largest;
}

void check_array_is_sorted(int arr[], int size)
{
	int i;
	for(i = 1; i < size; i++)
	{
		if (arr[i-1] > arr[i]) {
			printf("Array not sorted\n");
			return;
		}
	}
	printf("Array is sorted\n");
}

int second_largest_array(int arr[], int size)
{
	int max = get_largest(arr, size);
	int max_2 = 0;
	int i;

	for(i = 0; i < size; i++) {
		if (arr[max] != arr[i])
			if (arr[max_2] < arr[i])
				max_2 = i;
	}
	return max_2;
}

int reverse_array(int arr[], int size)
{
	int tmp,i;
	for(i = 0; i < size/2; i++) {
		tmp = arr[i];
		arr[i] = arr[(size -1)-i];
		arr[(size -1)-i] = tmp;
	}
}

int remove_dups(int arr[], int size)
{
	//1,2,2,3,4,4,4,4,4
	int i;
	int j = 1;
	for (i = 1; i < size; i++)
	{
		if (arr[j - 1] != arr[i]) {
			arr[j] = arr[i];
			j++;
		}
	}
	print_arr(arr, j);
}

int move_zeros_to_end(int arr[], int size)
{
	//1,2,0,0,0,3,0,5
    int i;
    int count = 0;
    for(i = 0; i < size; i++) {
        if(arr[i] != 0) {
            swap(&arr[i], &arr[count]);
            count++;
        }
    }
}

int rotate_arr_by_one(int arr[], int size)
{
    int i;
    int tmp = arr[0];;
    for(i = 1; i < size; i++) {
        arr[i-1] = arr[i];
    }
    arr[size-1] = tmp;
}

int rotate_arr_by_d(int arr[], int n, int d)
{
    int i;
    for(i = 0; i < d; i++)
        rotate_arr_by_one(arr, n);
}

int rotate_arr_by_d_2(int arr[], int n, int d)
{
    int i;
    int tmp[d];
    
    for(i = 0; i < d; i++)
        tmp[i] = arr[i];

    for(i = d; i < n; i++)
        arr[i-d] = arr[i];
    
    for(i = 0; i < n; i++)
        arr[n-d+i] = tmp[i];
}

int main()
{
	int arr[] = {3,44,5,7,3,4};
	int arr_rev[] = {1,2,3,4,5,6};
	int arr_2[] = {1};
	int arr_dups[] = {1,2,2,3,3,3,4,4,4,4};
	int arr_zero[] = {1,2,0,0,0,0,4,0,6};

	printf("Largest is %d\n", arr[get_largest(arr, SIZE_ARR(arr))]);
	printf("Second Largest is %d\n", arr[second_largest_array(arr, SIZE_ARR(arr))]);

	/*arr is sorted or not */
	check_array_is_sorted(arr, SIZE_ARR(arr));
	check_array_is_sorted(arr_2, SIZE_ARR(arr_2));

	print_arr(arr_rev, SIZE_ARR(arr_rev));
	reverse_array(arr_rev, SIZE_ARR(arr_rev));
	print_arr(arr_rev, SIZE_ARR(arr_rev));

	print_arr(arr_dups, SIZE_ARR(arr_dups));
	remove_dups(arr_dups, SIZE_ARR(arr_dups));
	
    print_arr(arr_zero, SIZE_ARR(arr_zero));
    move_zeros_to_end(arr_zero, SIZE_ARR(arr_zero));
    print_arr(arr_zero, SIZE_ARR(arr_zero));


    print_arr(arr, SIZE_ARR(arr));
    rotate_arr_by_one(arr, SIZE_ARR(arr));
    print_arr(arr, SIZE_ARR(arr));

    printf("rotate_arr_by_d %d\n", 2);
    print_arr(arr, SIZE_ARR(arr));
    rotate_arr_by_d(arr, SIZE_ARR(arr), 2);
    print_arr(arr, SIZE_ARR(arr));
	
    int arr_d_2[] = {1,2,3,4,5};
    printf("rotate_arr_by_d_2 %d\n", 3);
    print_arr(arr_d_2, SIZE_ARR(arr_d_2));
    rotate_arr_by_d(arr_d_2, SIZE_ARR(arr_d_2), 3);
    print_arr(arr_d_2, SIZE_ARR(arr_d_2));
}
