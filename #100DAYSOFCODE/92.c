//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // For 'a' to 'z'
    char result = '\0';

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Find first repeating lowercase letter
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Consider only lowercase alphabets
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            // If frequency becomes 2, it’s the first repeating
            if (freq[ch - 'a'] == 2) {
                result = ch;
                break;
            }
        }
    }

    if (result != '\0')
        printf("%c", result);
    else
        printf("No repeating character");

    return 0;
}
