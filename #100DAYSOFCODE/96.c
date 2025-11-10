//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int start = 0, end = 0;

    // Read the input sentence
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    while (end <= len) {
        // When space or end of string is found, reverse the current word
        if (str[end] == ' ' || str[end] == '\0') {
            int left = start, right = end - 1;
            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
            start = end + 1; // Move to start of next word
        }
        end++;
    }

    // Print the modified sentence
    printf("%s", str);

    return 0;
}
