//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Read a string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Count characters until null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    // Subtract 1 if newline is present at the end (from fgets)
    if (str[count - 1] == '\n')
        count--;

    printf("%d", count);

    return 0;
}
