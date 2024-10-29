#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n = 5, p = 3, q = 4; // declare matrix dimensions
    double A[n][p], B[p][q], C[n][q]; // declare arrays
    int i, j, k; //Loop indices
    // Initialize A, B, C 
    for (i=0; i<n; i++) {
        for (j=0; j<p; j++) {
            A[i][j]=i+j;
        }
    }
    for (i=0; i<p; i++) {
        for (j=0; j<q; j++) {
            B[i][j]=i-j;
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<p; j++) {
            C[i][j]=0.0;
        }
    }
    // Perform matrix multiplication
    for (i=0; i<n; i++) {
        for (j=0; j<q; j++) {
            for (k=0;k<p;k++) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    //Print out matrices A, B, C
    printf("\n This is matrix A\n\n[[");
    for (i=0; i<n; i++) {
        if (i) {
            printf(" [");
        }
        for (j=0; j<p; j++) {
            printf("%3.0f, ", A[i][j]);
        }
        if (i<n-1) {
            printf("],\n");
        }
    }
    printf("]]\n\n This is matrix B\n\n[[");
    for (i=0; i<p; i++) {
        if (i) {
            printf(" [");
        }
        for (j=0; j<q; j++) {
            printf("%3.0f, ", B[i][j]);
        }
        if (i<p-1) {
            printf("],\n");
        }
    }
    printf("]]\n\n This is matrix C\n\n[[");
    for (i=0; i<n; i++) {
        if (i) {
            printf(" [");
        }
        for (j=0; j<q; j++) {
            printf("%3.0f, ", C[i][j]);
        }
        if (i<n-1) {
            printf("],\n");
        }
    }
    printf("]]\n");
    return 0;
}
