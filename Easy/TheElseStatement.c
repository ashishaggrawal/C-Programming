// Given a number n, print whether it is Positive, Negative or Zero using if / else if / else.
// Input: n = 7
// Output: Positive
// Input: n = -3
// Output: Negative

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Positive\n");
    } else if (n < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}
