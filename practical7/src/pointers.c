#include <stdio.h>
#include <stdlib.h>

//- function declaration
int *allocateArray (int size);
void fillWithOnes (int *p, int size);
void printTheArray (int *p, int size);
void freeTheArray (int *p);

int main(){
    //- defining variables, also creating a int pointer for array 
    int size = 5;
    int i;
    int *array;
    
    //- sending size to allocateArray function pointer and allocating the array
    array = allocateArray(size);
    fillWithOnes(array, size);
    printTheArray(array,size);
    return 0;
}
//- function to allocate the array with the size of size using malloc
int *allocateArray (int size){
    return ((int *)malloc(size * sizeof(int)));
}
//- initializing the array
void fillWithOnes (int *p, int size){
    int i;
    for (i = 0 ; i < size ; i++){
        p[i] = 1;
    }
}
//- a function to print them all
void printTheArray(int *p, int size){
    int i;
    printf("\n");
    for (i = 0 ; i < size ; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
}
//- a function to free them all
void freeTheArray(int *p){
    free(p);
}
