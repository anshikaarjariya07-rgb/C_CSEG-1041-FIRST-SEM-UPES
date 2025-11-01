//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k, i;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k (number of rotations)
    scanf("%d", &k);

    // To handle cases where k > n
    k = k % n;

    int result[n];
    int index = 0;

    // Copy last k elements to the beginning
    for (i = n - k; i < n; i++) {
        result[index++] = arr[i];
    }

    // Copy the first n-k elements after them
    for (i = 0; i < n - k; i++) {
        result[index++] = arr[i];
    }

    // Print rotated array
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
