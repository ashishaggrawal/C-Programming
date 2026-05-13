// Given a number n, print the smallest prime number strictly greater than n.
// Input: n = 10
// Output: 11
// Input: n = 13
// Output: 17

#include <stdio.h>

int isPrime(long long x) {
    if (x < 2) {
        return 0;
    }
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    long long candidate = n + 1;
    while (!isPrime(candidate)) {
        candidate++;
    }

    printf("%lld\n", candidate);
    return 0;
}
