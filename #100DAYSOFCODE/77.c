//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int rows, cols, i, j, isDistinct = 1;

    // Input number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check only for square matrices
    if (rows != cols) {
        printf("False");
        return 0;
    }

    // Store diagonal elements
    int diag[rows];
    for (i = 0; i < rows; i++) {
        diag[i] = matrix[i][i];
    }

    // Check if diagonal elements are distinct
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    if (isDistinct)
        printf("True");
    else
        printf("False");

    return 0;
}
