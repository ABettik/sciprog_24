/*
* random number generation
* */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int a, b;

    // Generate two number random positive integers between 1 and 20
    srand(time(NULL));
    a=(rand() % 20)+1;
    b=(rand() % 20)+1;

    printf("%d, %d\n", a, b);
    
    return 0;
}