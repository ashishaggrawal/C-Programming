// Given a number n, print all numbers from 1 to n in a single line, separated by spaces.
// Input: n = 5
// Output: 1 2 3 4 5

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
