//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

int main() {
    // Define enum for user roles
    enum Role { ADMIN, USER, GUEST };

    char input[20];
    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", input);

    enum Role r;

    // Convert string to enum
    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else if (strcmp(input, "GUEST") == 0)
        r = GUEST;
    else {
        printf("Invalid role");
        return 0;
    }

    // Display messages based on role
    switch (r) {
        case ADMIN:
            printf("Welcome Admin! Full access granted.");
            break;
        case USER:
            printf("Welcome User! Limited access.");
            break;
        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}
