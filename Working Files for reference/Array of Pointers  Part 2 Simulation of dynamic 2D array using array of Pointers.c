/*

#include <stdio.h>
#include <stdlib.h>
//malloc, calloc, realloc


// The function 'allocate' is used to allocate memory for a 2D array (matrix) dynamically.
int **allocate(int nRows, int nCols) {
    // Declare a double pointer to store the 2D array (matrix). This will be returned by the function.
    int **p;

    // Allocate memory for an array of pointers (rows) using malloc(). Each pointer will point to a separate integer array (columns).
    p = (int **)malloc(nRows * sizeof(int*));

    // Check if memory allocation was successful. If not, exit the program with a status code 0.
    if (p == NULL) {
        exit(0);
    }

    int i, j;
    // Loop through each row and allocate memory for an array of integers (columns) using malloc().
    // Each integer pointer points to the first element in a column.
    for (i = 0; i < nRows; i++) {
        *(p + i) = (int *)malloc(nCols * sizeof(int));
    }

    // Return the double pointer to the dynamically allocated 2D array (matrix).
    return p;
}

// The function 'inputValues' is used to input values into the dynamically allocated 2D array (matrix).
void inputValues(int **p, int nRows, int nCols) {
    int i, j;
    // Loop through each row and column of the matrix.
    for (i = 0; i < nRows; i++) {
        for (j = 0; j < nCols; j++) {
            // Prompt user to enter a value for the current element in the matrix.
            printf("Enter value for %d row %d col: ", i, j);
            scanf("%d", (*(p + i) + j));
        }
    }
}

// The function 'printValues' is used to print the values of the elements in the dynamically allocated 2D array (matrix).
void printValues(int **p, int nRows, int nCols) {
    int i, j;
    // Loop through each row and column of the matrix.
    for (i = 0; i < nRows; i++) {
        for (j = 0; j < nCols; j++) {
            // Print the value of the current element in the matrix with a width of 6 characters.
            printf("%6d", *(*(p + i) + j));
        }
        printf("\n");
    }
}

int main(void) {
    // Declare a double pointer to store the address of the first row in the dynamically allocated 2D array (matrix).
    int **p;

    // Declare variables for storing the number of rows and columns in the matrix.
    int nRows, nCols;

    // Prompt user to enter the number of rows and columns for the matrix.
    printf("Enter Number of Rows: ");
    scanf("%d", &nRows);
    printf("Enter Number of Cols: ");
    scanf("%d", &nCols);

    // Call the 'allocate' function to dynamically allocate memory for a 2D array (matrix) and store its address in the 'p' pointer.
    p = allocate(nRows, nCols);

    // At this point, we have successfully allocated memory for a 2D array (matrix) of size nRows x nCols.
    
    inputValues(p, nRows, nCols);
    printValues(p, nRows, nCols);

    return 0;
}

*/
