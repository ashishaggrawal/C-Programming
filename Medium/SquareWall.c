// Given a number n, print a square wall of n x n stars using nested loops.
// Input: n = 3
// Output:
// * * *
// * * *
// * * *

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
