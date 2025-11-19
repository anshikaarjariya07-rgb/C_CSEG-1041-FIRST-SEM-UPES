//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100];
    char text[200];

    // Get the filename from user
    printf("Enter filename: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0'; // Remove newline

    // Open file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error! Unable to open file.\n");
        return 1;
    }

    // Get the text to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append new line before text if needed
    fputc('\n', file);
    fputs(text, file);

    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}
