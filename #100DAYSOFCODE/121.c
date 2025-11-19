//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    file = fopen("info.txt", "w"); // Open file in write mode

    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // Input from user
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write to file using fprintf
    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    fclose(file); // Close the file

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
