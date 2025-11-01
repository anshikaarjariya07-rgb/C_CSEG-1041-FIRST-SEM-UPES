/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5; // Number of rows

    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (space = 0; space < i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
