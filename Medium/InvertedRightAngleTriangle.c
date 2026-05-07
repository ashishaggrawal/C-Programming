// Given a number n, print an inverted right angle triangle of stars with n rows.
// Input: n = 4
// Output:
// * * * *
// * * *
// * *
// *

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
