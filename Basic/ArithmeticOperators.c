// Given two numbers a and b, print the result of every arithmetic operator.
// Input: a = 7, b = 2
// Output:
// Addition: 9
// Subtraction: 5
// Multiplication: 14
// Division: 3.5
// Integer Division: 3
// Modulus: 1

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %g\n", (double)a / b);  // cast to double to keep the decimal part
    printf("Integer Division: %d\n", a / b);  // int / int drops the decimal part
    printf("Modulus: %d\n", a % b);
    return 0;
}
