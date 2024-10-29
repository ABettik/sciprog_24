#include<stdio.h>
#include<stdlib.h>
// function prototype for matmul
void matmul(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main(void){
    int n = 5, p = 3, q = 4; // declare
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
    matmul(n, p, q, A, B, C);

    //Print out matrices A, B, C
    printf("\n This is matrix A\n\n");
    for (i=0; i<n; i++) {
        printf("[");
        for (j=0; j<p; j++) {
            printf("%3.0f, ", A[i][j]);
        }
        printf("]\n");
    }
    printf("\n This is matrix B\n\n");
    for (i=0; i<p; i++) {
        printf("[");
        for (j=0; j<q; j++) {
            printf("%3.0f, ", B[i][j]);
        }
        printf("]\n");
    }
    printf("\n This is matrix C\n");
    for (i=0; i<n; i++) {
        printf("[");
        for (j=0; j<q; j++) {
            printf("%3.0f, ", C[i][j]);
        }
        printf("],\n");
    }
    return 0;
}
