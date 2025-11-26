//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    int ch;

    // Open input file for reading
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    // Open output file for writing
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Unable to create output.txt\n");
        fclose(inFile);
        return 1;
    }

    // Read each character, convert to uppercase, and write to output
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("File converted to uppercase successfully and saved to output.txt\n");

    return 0;
}
