//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

int main() {
    // Enum for operations
    enum Operation { ADD, SUBTRACT, MULTIPLY };

    char op[20];
    int a, b;

    printf("Enter operation and two numbers (ADD 10 20): ");
    scanf("%s %d %d", op, &a, &b);

    enum Operation choice;

    // Convert string to enum
    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid operation");
        return 0;
    }

    // Perform operation
    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
