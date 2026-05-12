// Given a number n, print "Prime" if it is a prime number, otherwise "Not Prime".
// Input: n = 7
// Output: Prime
// Input: n = 10
// Output: Not Prime

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int is_prime = n > 1;
    for (int i = 2; (long long)i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    return 0;
}
