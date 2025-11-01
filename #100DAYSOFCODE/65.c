//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];
    int low, high, mid;
    int found = -1;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Elements are: ");
    // Read array elements (sorted)
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to search
    printf("Enter the element which is to be searched: ");
    scanf("%d", &key);

    // Binary search
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Print result
    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}
