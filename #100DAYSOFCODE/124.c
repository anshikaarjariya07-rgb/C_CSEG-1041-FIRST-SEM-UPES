//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
#include <string.h>

int main() {
    FILE *srcFile, *destFile;
    char srcName[100], destName[100];
    int ch;

    // Take source file name
    printf("Enter source file name: ");
    fgets(srcName, sizeof(srcName), stdin);
    srcName[strcspn(srcName, "\n")] = '\0'; // remove newline

    // Take destination file name
    printf("Enter destination file name: ");
    fgets(destName, sizeof(destName), stdin);
    destName[strcspn(destName, "\n")] = '\0'; // remove newline

    // Open source file in read mode
    srcFile = fopen(srcName, "r");
    if (srcFile == NULL) {
        printf("Error! Unable to open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error! Unable to open/create destination file.\n");
        fclose(srcFile);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(srcFile);
    fclose(destFile);

    printf("File copied successfully to %s\n", destName);

    return 0;
}
