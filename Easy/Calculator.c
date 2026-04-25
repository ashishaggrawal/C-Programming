// Given two numbers and an operator (+, -, *, /), print the result.
// Input: 10, 5, *
// Output: 50

#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // the space skips the leftover newline

    switch (op) {
        case '+':
            printf("%g\n", a + b);
            break;
        case '-':
            printf("%g\n", a - b);
            break;
        case '*':
            printf("%g\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Cannot divide by zero\n");
            } else {
                printf("%g\n", a / b);
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
