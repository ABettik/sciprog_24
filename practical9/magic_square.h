#include <stdio.h>
// checks if a matrix is a magic square.
// a magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals n(n^2 + 1)/2.
// the function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value

int isMagicSquare(int **square, const int n) {

    // eliminate the case where 'n' is negative
    if (n < 0) {
        return 0;
    }

    // M is the sum of every row, column, and the main and secondary diagonals
    int M = (n * (n * n + 1)) / 2;

    int i, j;
    int rowSum = 0;
    int colSum = 0;

    // check that every row and column adds up to M
    for (i = 0; i < n; i++)
    {
        rowSum = 0;
        colSum = 0;
        for (j = 0; j < n; j++)
        {
            rowSum += square[i][j]; // rowsum
            colSum += square[j][i]; // columnsum
        }
        if (rowSum != M || colSum != M)
        { // verify sums
            return 0;
        }
    }

    // check that the main and secondary diagonals each add up to M
    int diagSum = 0;
    int secDiagSum = 0;
    for (i = 0; i < n; i++) {
        diagSum += square[i][i]; // diagonalsum 
        secDiagSum += square[i][n - i - 1]; // secondary diagonalsum
    }

    // if diagonals don't sum to M, it's not a magic square
    if (diagSum != M || secDiagSum != M) {
        return 0;
    }

    // if all checks are passed, it is a magic square
    return 1;
}
