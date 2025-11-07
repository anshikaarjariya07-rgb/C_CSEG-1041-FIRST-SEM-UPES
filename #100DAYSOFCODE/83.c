//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Loop through each character
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Convert uppercase to lowercase for simplicity
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
        // Check for consonants (letters only)
        else if (ch >= 'a' && ch <= 'z')
            consonants++;
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
