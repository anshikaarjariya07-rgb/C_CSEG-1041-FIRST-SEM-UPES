//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int rows, cols, i, j, isSymmetric = 1;

    // Input number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (rows != cols) {
        printf("False");
        return 0;
    }

    // Check if matrix is symmetric
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }
     if (isSymmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
