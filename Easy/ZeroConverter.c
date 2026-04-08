// Given a number n, replace every 0 digit in it with 5.
// Input: n = 1004
// Output: 1554
// Input: n = 121
// Output: 121

#include <stdio.h>

int main() {
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    long long result = 0;
    if (n == 0) {
        result = 5;
    } else {
        long long place = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit == 0) {
                digit = 5;
            }
            result += digit * place;
            place *= 10;
            n /= 10;
        }
    }

    printf("%lld\n", result);
    return 0;
}
