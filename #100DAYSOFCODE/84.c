//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main() {
    char str[100];

    // Read string input
    fgets(str, sizeof(str), stdin);

    // Convert to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert lowercase to uppercase
        }
    }

    // Print result
    printf("%s", str);

    return 0;
}
