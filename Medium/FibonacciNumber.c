// Given a number n, print the nth Fibonacci number (1, 1, 2, 3, 5, 8, ...).
// Input: n = 6
// Output: 8

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        long long next = a + b;
        a = b;
        b = next;
    }

    printf("%lld\n", a);
    return 0;
}
