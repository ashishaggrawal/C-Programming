// Given two numbers a and b, print their LCM (Least Common Multiple).
// LCM(a, b) = a * b / GCD(a, b)
// Input: a = 4, b = 6
// Output: 12

#include <stdio.h>

int main() {
    long long a, b;

    printf("Enter a: ");
    scanf("%lld", &a);
    printf("Enter b: ");
    scanf("%lld", &b);

    long long x = a, y = b;
    while (y != 0) {
        long long temp = y;
        y = x % y;
        x = temp;
    }

    printf("%lld\n", a / x * b);  // divide first so the product does not overflow
    return 0;
}
