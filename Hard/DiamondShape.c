// Given a number n, print a diamond of stars with 2n - 1 rows.
// Input: n = 3
// Output:
//     *
//   * * *
// * * * * *
//   * * *
//     *

#include <stdio.h>

void printRow(int n, int i) {
    for (int s = 0; s < n - i; s++) {
        printf("  ");
    }
    for (int j = 0; j < 2 * i - 1; j++) {
        printf("* ");
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printRow(n, i);
    }
    for (int i = n - 1; i >= 1; i--) {
        printRow(n, i);
    }
    return 0;
}
