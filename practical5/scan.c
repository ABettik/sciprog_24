#include<stdio.h>

int main(void) {
    int i;
    double a;
    // Enter information from user
    printf("Enter an int and double\n");
    int ierr = scanf("%d %lf",&i,&a);
    // check for the correct input format
    if(ierr !=2)
    {
        printf("Problem with input\n");
        return 1;
    }
    printf("%d, %lf \n",i,a);
    return 0;
}