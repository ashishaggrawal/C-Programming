// Given a number n, use a while loop to print numbers from 1 to n jumping by 2.
// Input: n = 10
// Output: 1 3 5 7 9

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }

    printf("\n");
    return 0;
}
