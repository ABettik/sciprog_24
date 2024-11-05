#include<stdio.h>
#include<stdlib.h>

int* allocatearray(int n); // allocates memory for an array of integers
void fillwithones(int* p, int n); // fills the array with ones
void printarray(int *p, int n); // prints the elements of the array
void freepointer(int *p); // frees allocated memory

int main(void){
    int size = 25; // of array
    int *array;

    array = allocatearray(size); // allocate memory
    fillwithones(array, size); // fill array with ones
    printarray(array, size); // print array contents
    freepointer(array); // free memory

    return 0;
}

int* allocatearray(int n){
    // int *temp;
    // temp = (int *)malloc(n * sizeof(int));
    // return (temp);

    // allocate memory for n integers
    return (int *)malloc(n * sizeof(int)); 
}

void fillwithones(int* p, int n){
    int i;
    for (i = 0; i < n; i++)
    {
        // fill every cell of the array with a one
        p[i] = 1; 
        // *(p+i)=1; //pointer arithmetic
    }
    // no return 
}

void printarray(int *p, int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" %d ", p[i]); // print each element
    }
}

void freepointer(int *p){
    // free memory
    free(p);
}
