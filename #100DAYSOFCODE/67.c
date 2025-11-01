//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n, pos, value, i;

    // Input size of array
    scanf("%d", &n);

    int arr[100];  // assuming max size 100

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and value to insert
    scanf("%d %d", &pos, &value);

    // Shift elements to the right from the end
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos - 1] = value;

    // Print updated array
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
