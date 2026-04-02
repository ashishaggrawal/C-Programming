// Given a number n, print all numbers from n down to 1 in a single line, separated by spaces.
// Input: n = 5
// Output: 5 4 3 2 1

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
