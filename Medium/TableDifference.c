// Given two numbers n and m, print the difference of their multiplication tables
// (n*i - m*i for i from 1 to 10) in a single line.
// Input: n = 5, m = 3
// Output: 2 4 6 8 10 12 14 16 18 20

#include <stdio.h>

int main() {
    int n, m;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);

    for (int i = 1; i <= 10; i++) {
        printf("%d ", n * i - m * i);
    }

    printf("\n");
    return 0;
}
