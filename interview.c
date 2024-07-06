#includenclude<stdio.h>

void swap(int a, int b){
    int temp =a;
    a = b;
    b = temp;
}

void sort_array_function(int arr[], int len){
    for(int i=0; i < len; i++){
        for j=0; j<i; j++){
            if(arr[j] >arr[j+1]){
                swap(arr[j], arr[j+1]);
            }

        }

    }
}

int find_max(int arr[], int len){
    int max = arr[0];
    for(int i= 1;i<len; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;

}
int find_min(int arr[], int len){
    int min = arr[0];
    for(int i= 1;i<len; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    return min;

}

int main(){
    int arr[] = {1,57,843,3,23,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    sort_array_function(arr,len);

    int max_value = find_max(arr);
    int min_value = find_min(arr);

    for(int i=0;i<len;i++){
        print("%d/t", arr[i]);
    }
    print("max is %d\n", max_value);
    print("min value id %d\n", min_value);

    return 0;
}


