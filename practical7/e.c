#include<math.h>
#include<stdio.h>
#include<stdlib.h>

// Memory allocation for each power of x separately
int factorial (int x);

int main(void) {
    int i, order;
    double e, *terms; //pointer of doubles
    printf("Please enter the order you wish to use\n");
    scanf("%d", &order);
    // malloc returns void pointer so need to cast to double
    terms = (double *)malloc(order*sizeof(double)); 
    // check if factorial works
    // printf("5! is %d\n", factorial(-5));

    for (i=0; i<order; i++) {
        terms[i] = 1.0 / (double)factorial(i+1);
        // printf("%.16lf\n", terms[i]);
    }
    e = 1.0;
    for (i=0;i<order; i++){
        e=e+terms[i];
    }

    // free the memory right after declaring malloc to not forget
    free(terms);
    printf("e is estimated as %.10lf, with difference %e\n", e, e-exp(1.0));
    return 0;
}

int factorial(int x) {
    /* code */
    if (x<0){
        printf("You must use a positive number\n");
        return(-1);
    }else if (x==0) {
        return 1;
    } else {
        return (x*factorial(x-1));
    }

}