//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100]; // Maximum array size

    // Read number of elements
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the result
    printf("%d\n", sum);

    return 0;
}
