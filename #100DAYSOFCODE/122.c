//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("info.txt", "r"); // Open file in read mode

    if (file == NULL) {
        printf("Error! Unable to open file.\n");
        return 1;
    }

    // Read and print file content line by line
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    fclose(file); // Close the file

    return 0;
}
