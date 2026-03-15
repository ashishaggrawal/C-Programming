// Given two numbers a and b, use the logical operators && (and), || (or), ! (not).
// In C a condition gives 1 for true and 0 for false.
// Input: a = 5, b = 0
// Output:
// a > 0 && b > 0: 0
// a > 0 || b > 0: 1
// !(a > 0): 0

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("a > 0 && b > 0: %d\n", a > 0 && b > 0);
    printf("a > 0 || b > 0: %d\n", a > 0 || b > 0);
    printf("!(a > 0): %d\n", !(a > 0));
    return 0;
}
