//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, lastSpace = -1;

    // Read full name
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);

    // Find the position of the last space (before surname)
    for (i = 0; i < len; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    // Print initials for all words before surname
    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (i = 1; i < lastSpace; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ')
            printf("%c.", str[i]);
    }

    // Print surname (after last space)
    if (lastSpace != -1)
        printf(" %s", str + lastSpace + 1);

    return 0;
}
