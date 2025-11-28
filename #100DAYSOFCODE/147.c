//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    // Input employee details
    printf("Enter employee details (Name ID Salary):\n");
    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);

    // ------- Write to binary file -------
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // ------- Read from binary file -------
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // ------- Display employee details -------
    printf("\nData read from file:\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.0f\n", e2.salary);

    return 0;
}
