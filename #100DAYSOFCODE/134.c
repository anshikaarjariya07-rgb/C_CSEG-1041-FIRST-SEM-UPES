//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>

int main() {
    // Define enum
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    char input[20];
    printf("Enter status (SUCCESS / FAILURE / TIMEOUT): ");
    scanf("%s", input);

    enum Status s;

    // Convert string to enum
    if (strcmp(input, "SUCCESS") == 0)
        s = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        s = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0)
        s = TIMEOUT;
    else {
        printf("Invalid status");
        return 0;
    }

    // Print corresponding message
    switch (s) {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}
