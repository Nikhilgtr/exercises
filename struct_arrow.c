#include <stdio.h> 
#include <stdlib.h> 

// Creating the structure 
typedef struct student_ { 
    char name[80]; 
    int age; 
    float percentage; 
}student; 

// Creating the structure object 

// Driver code 
int main() 
{ 
    student* emp = NULL; 
    // Assigning memory to struct variable emp 
    emp = (student*) 
        malloc(2*sizeof(student)); 

    // Assigning value to age variable 
    // of emp using arrow operator 
    emp[0]->age = 18; 

    // Printing the assigned value to the variable 
    printf("%d", emp[0]->age); 

    return 0; 
} 
