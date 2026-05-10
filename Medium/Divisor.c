// Given a number n, print all of its divisors in increasing order.
// Input: n = 12
// Output: 1 2 3 4 6 12

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
