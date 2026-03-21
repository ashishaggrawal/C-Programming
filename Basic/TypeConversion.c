// Convert values between char, int and float using type casting.
// Input: 65
// Output:
// int: 65
// float: 65.000000
// char: A
// float 7.9 to int: 7

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("int: %d\n", n);
    printf("float: %f\n", (float)n);
    printf("char: %c\n", (char)n);              // a char is stored as its ASCII code
    printf("float 7.9 to int: %d\n", (int)7.9); // casting to int drops the decimal part
    return 0;
}
