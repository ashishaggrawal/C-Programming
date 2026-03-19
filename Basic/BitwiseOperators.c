// Given two numbers a and b, print the result of every bitwise operator.
// Input: a = 6 (110), b = 3 (011)
// Output:
// a & b: 2
// a | b: 7
// a ^ b: 5
// ~a: -7
// a << 1: 12
// a >> 1: 3

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("a & b: %d\n", a & b);      // AND: 1 only where both bits are 1
    printf("a | b: %d\n", a | b);      // OR: 1 where either bit is 1
    printf("a ^ b: %d\n", a ^ b);      // XOR: 1 where the bits are different
    printf("~a: %d\n", ~a);            // NOT: flips all bits, equals -(a + 1)
    printf("a << 1: %d\n", a << 1);    // left shift: multiplies by 2
    printf("a >> 1: %d\n", a >> 1);    // right shift: divides by 2
    return 0;
}
