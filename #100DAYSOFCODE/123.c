//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    file = fopen("sample.txt", "r"); // Open file in read mode

    if (file == NULL) {
        printf("Error! Unable to open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n')
            lines++;

        // Check word boundaries
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;
            words++;
        } else if (isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(file);

    // If file has content but no newline at end, count the last line
    if (characters > 0 && lines == 0)
        lines = 1;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
