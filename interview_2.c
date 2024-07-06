#include<stdio.h>
#include<string.h>

char *extract_alphabet(char *str){
    char *store = (char*)malloc(sizeof(char)*strlen(str)+1);
    while(*str){
        if(isalpha(*str))
        {
            strncat(store, str, 1);
        }

    }
    return store;
}                }

char *convert_to_lower(char *arr){
    for(int i=0; arr[i]! = '\0'; i++){
        if(arr[i]>='A' && arr[i]<='Z'){
            arr[i] = arr[i]+32;
        }
    }
    return str;
}

int main(){
    char *str = "He0L0Lo";
    char *extracted  = extract_alphabet(str);
    char *into_lower = convert_to_lower(extracted);
    print("%s\n", into_lower);

    return 0;
}
