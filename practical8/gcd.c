/*
* Iterative and recuresive version of Euclid's
* algorithm to calculate the gcd of two positive integers
* */

#include<stdio.h>

// calculates gcd iteratively
int iterativeGCD(int a, int b) {
    int temp;
    while (b != 0) { // loop until remainder is 0
        temp = b;
        b = a % b; // update b with remainder
        a = temp; // update a with old b
    }
    return a;
}

// calculates gcd recursively
int recursiveGCD(int a, int b) {
    if (b == 0) return a; // base case: gcd found
    return recursiveGCD(b, a % b); // recursive step
}

int main() {
    int a, b, error;

    printf("please enter two positive integers:\n");
    error = scanf("%d %d", &a, &b); // read input
    if (error != 2) { // check for valid input
        printf("please enter two integers!\n");
        return 1; // exit with error
    } else if (a <= 0 || b <= 0) { // check for positive values
        printf("please enter positive integers!\n");
        return 1; // exit with error
    }

    // calculate and print gcd using iterative method
    printf("iterativeGCD(%d, %d) = %d\n", a, b, iterativeGCD(a, b));
    // calculate and print gcd using recursive method
    printf("recursiveGCD(%d, %d) = %d\n", a, b, recursiveGCD(a, b));
    
    return 0; // exit successfully
}