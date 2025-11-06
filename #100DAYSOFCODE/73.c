//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows]; // array to store sum of each row

    // Input matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
