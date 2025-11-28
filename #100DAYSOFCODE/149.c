//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    // Allocate memory dynamically for one Student structure
    struct Student *st = (struct Student *)malloc(sizeof(struct Student));

    if (st == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details
    scanf("%s %d %d", st->name, &st->roll, &st->marks);

    // Output details
    printf("Name: %s | Roll: %d | Marks: %d\n", st->name, st->roll, st->marks);

    // Free allocated memory
    free(st);

    return 0;
}
