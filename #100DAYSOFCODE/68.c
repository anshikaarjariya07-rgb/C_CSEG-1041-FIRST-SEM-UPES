//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, pos, i;
    
    // Input array size
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input position to delete (1-based index)
    scanf("%d", &pos);
    
    // Shift elements to the left from the position
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Print updated array
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
