//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n = 3;  // You can change this if needed
    struct Student s[n];
    int i, topperIndex = 0;

    // Input student details
    printf("Enter details of %d students (Name Roll Marks):\n", n);
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Find the index of the student with highest marks
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Print topper details
    printf("\nTopper: %s (Marks: %.0f)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}
