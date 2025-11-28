//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that returns the student with highest marks
struct Student getTopStudent(struct Student s[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex]; // returning structure
}

int main() {
    int n = 3;
    struct Student s[3];

    // Input
    printf("Enter details of 3 students (Name Roll Marks):\n");
    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Get top student
    struct Student top = getTopStudent(s, n);

    // Output
    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n",
           top.name, top.roll, top.marks);

    return 0;
}
