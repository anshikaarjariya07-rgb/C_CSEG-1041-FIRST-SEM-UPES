//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() {
    char str[100], result[100];
    int j = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Remove vowels
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Convert uppercase to lowercase for checking
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        // Skip vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || str[i] == '\n')
            continue;

        result[j++] = str[i];
    }

    result[j] = '\0';  // Null-terminate the result string

    printf("%s", result);

    return 0;
}
