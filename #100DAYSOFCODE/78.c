//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;

    // Input number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if it's a square matrix
    if (rows != cols) {
        printf("Not a square matrix");
        return 0;
    }

    // Sum of main diagonal elements (where i == j)
    for (i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    // Print result
    printf("%d", sum);

    return 0;
}
