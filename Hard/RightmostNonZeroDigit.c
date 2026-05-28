// Given an array of numbers, print the rightmost non-zero digit of their product.
// If the product is 0, print -1.
// Input: n = 4, arr = 3 23 30 45
// Output: 5   (3 * 23 * 30 * 45 = 93150)
// Input: n = 5, arr = 5 8 3 7 8
// Output: 2   (5 * 8 * 3 * 7 * 8 = 6720)

#include <stdio.h>

int main() {
    int n;

    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter numbers separated by spaces: ");

    // Factors of 2 and 5 pair up to make trailing zeros, so count them separately
    // and keep only the last digit of everything else (the product can be huge).
    int twos = 0, fives = 0, last = 1, has_zero = 0;
    for (int i = 0; i < n; i++) {
        long long num;
        scanf("%lld", &num);
        if (num == 0) {
            has_zero = 1;
            continue;
        }
        while (num % 2 == 0) {
            num /= 2;
            twos++;
        }
        while (num % 5 == 0) {
            num /= 5;
            fives++;
        }
        last = (last * (num % 10)) % 10;
    }

    if (has_zero) {
        printf("-1\n");
        return 0;
    }

    // Multiply back the 2s or 5s that did not get paired into a zero.
    int pairs = twos < fives ? twos : fives;
    for (int i = 0; i < twos - pairs; i++) {
        last = (last * 2) % 10;
    }
    for (int i = 0; i < fives - pairs; i++) {
        last = (last * 5) % 10;
    }

    printf("%d\n", last);
    return 0;
}
