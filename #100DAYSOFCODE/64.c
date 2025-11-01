//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long num;
    int count[10] = {0}; // Array to store frequency of digits 0-9
    int maxCount = 0, i, digit, mostFrequent;

    // Read the number
    scanf("%ld", &num);

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;   // Get last digit
        count[digit]++;     // Increment frequency
        num /= 10;          // Remove last digit
    }

    // Find the digit with maximum frequency
    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequent = i;
        }
    }

    // Print the most frequent digit
    printf("%d\n", mostFrequent);

    return 0;
}
