//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Read the full name
    fgets(str, sizeof(str), stdin);

    // Print first initial (first character)
    if (str[i] != ' ' && str[i] != '\n')
        printf("%c.", str[i]);

    // Loop through the string to find initials after spaces
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ' && str[i] != '\n')
            printf("%c.", str[i]);
    }

    return 0;
}
