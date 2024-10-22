#include<stdio.h>
#include<stdlib.h>

void fib(int *a, int *b);

int main(void) {
    int n;
    // Enter information from user
    printf("Please input a positive integer of n\n");
    int ierr = scanf("%d",&n);
    // check for the correct input fromat
    if(ierr !=1) {
        printf("Problem with input\n");
        exit(1);
    }

    // check for the correct value of n
    if(n<1) {
        printf("n must be bigger than 1\n");
        exit(1);
    }
    int f0 = 0;
    int f1 = 1;
    printf("The fib. series is\n");
    printf("%d\n%d\n",f0, f1);

    int i;
    for (i = 2; i<=n+1; i++)
    {
        fib(&f1, &f0);
        printf("%d \n",f1);
        if ((i+1)%10==0) {
            printf("\n");
        }
        
    }
    return 0;
}


void fib(int *a, int *b) {
    int next;
    next = *a + *b;

    *b = *a;
    *a = next;
}