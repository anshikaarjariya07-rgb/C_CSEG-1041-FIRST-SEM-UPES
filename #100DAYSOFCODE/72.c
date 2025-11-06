//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;

    // Input number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input matrix elements and calculate sum
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // add each element to sum
        }
    }

    // Print total sum
    printf("%d", sum);

    return 0;
}
