/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int i, j;
    // Array representing number of stars in each group
    int groups[] = {1, 2, 5, 3, 1};
    int numGroups = 5;

    // Loop through each group
    for (i = 0; i < numGroups; i++) {
        // Print stars in each group
        for (j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        // Print a blank line between groups (except after the last one)
        if (i != numGroups - 1)
            printf("\n");
    }

    return 0;
}
