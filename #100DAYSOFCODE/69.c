//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, i;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int second = -2147483648; // very small number

    // Find the largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // Find the second largest (different from max)
    for (i = 0; i < n; i++) {
        if (arr[i] != max && arr[i] > second)
            second = arr[i];
    }

    if (second == -2147483648)
        printf("No second largest element");
    else
        printf("%d", second);

    return 0;
}
