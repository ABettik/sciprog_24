#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

// function to get the number of lines in a file
int getlines(char filename[MAX_FILE_NAME]);

int main() {  

    // define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename); // gets the filename from the user
    
    // ##! n function which gets the number of lines
    int n = getlines(filename); // determine matrix size by counting lines

    // TODO: Open the file 
    f = fopen(filename, "r"); // opens the file; "r" for reading

    int i;
    // TODO: Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row 
    int **magicSquare = (int **)malloc(n * sizeof(int*)); // allocate memory for rows
    for (i = 0; i < n; i++)
    {
        magicSquare[i] = (int *)malloc(n * sizeof(int)); // allocate memory for columns
    }

    // TODO: inputting integer data into the matrix
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            fscanf(f, "%d", &magicSquare[i][j]); // read integers from the file into the matrix
        }
    }
    
    // check if the matrix is a magic square
    int is_square_magic = isMagicSquare(magicSquare, n);

    if (is_square_magic == 0)
    {
        printf("This is not a magic square!\n");
    } else 
    {
        printf("This is a magic square!\n");
    }

    // TODO: Freeing each row separately before freeing the array of pointers
    for (i = 0; i < n; i++) {
       free(magicSquare[i]); // free memory for each row
    }
    free(magicSquare); // free memory for the array of pointers

    // TODO: Close the file
    fclose(f); // close the file

    return 0;
}  

// ##!
// function to get the number of lines in a file
int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r"); // open the file for reading
    
    int ch_read;
    int count = 0;

    while ((ch_read = fgetc(fp)) != EOF)
    { // read characters until end of file
        if (ch_read == '\n')
        {
            count++; // increment count for each newline
        }
    }

    printf("No. lines: %d\n", count); // print the number of lines
    fclose(fp); // close the file
    return count; // return the number of lines
}
