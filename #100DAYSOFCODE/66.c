//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, i, key, pos;
    int arr[100];

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Elements are: ");

    // Read array elements (sorted)
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to insert
    printf("Enter the element which is to be inserted: ");
    scanf("%d", &key);

    // Find the correct position to insert
    pos = 0;
    while (pos < n && arr[pos] < key) {
        pos++;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the key
    arr[pos] = key;
    n++; // increase array size

    // Print updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
