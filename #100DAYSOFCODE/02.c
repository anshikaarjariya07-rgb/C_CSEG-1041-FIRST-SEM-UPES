//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main() {
    
    double num1, num2;
    double sum, difference, product, quotient;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 == 0) {
        printf("\nCannot calculate quotient: Division by zero is not allowed.\n");
    } else {
        quotient = num1 / num2;
    }
    
    printf("\n--- Results ---\n");
    printf("Sum: %.2lf\n", sum);
    printf("Difference: %.2lf\n", difference);
    printf("Product: %.2lf\n", product);
    printf("Quotient: %.2lf\n", quotient);
    return 0;
}