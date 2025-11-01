//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];
    int found = -1; // default value if not found

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Elements are: ");

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to search for
    printf("Enter element to be searched: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i; // store index where found
            break;
        }
    }

    // Print result
    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}
