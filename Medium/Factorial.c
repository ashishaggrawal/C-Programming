// Given a number n, print its factorial (n! = 1 * 2 * ... * n).
// unsigned long long holds results up to 20!.
// Input: n = 5
// Output: 120

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }

    printf("%llu\n", fact);
    return 0;
}
