//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>

int main() {
    int n, i;
    int arr[100], temp;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Elements are: ");

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array in place
    for (i = 0; i < n / 2; i++) {
        // Swap arr[i] and arr[n-i-1]
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed array is: ");
    
    // Print reversed array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
