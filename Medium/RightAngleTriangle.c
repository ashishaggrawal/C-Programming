// Given a number n, print a right angle triangle of stars with n rows.
// Input: n = 4
// Output:
// *
// * *
// * * *
// * * * *

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
