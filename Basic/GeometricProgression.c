// Given the first term a, common ratio r and a count n, print the first n terms of the
// geometric progression a, a*r, a*r^2, ...
// Input: a = 2, r = 3, n = 5
// Output: 2 6 18 54 162

#include <stdio.h>

int main() {
    long long a, r;
    int n;

    printf("Enter first term: ");
    scanf("%lld", &a);
    printf("Enter common ratio: ");
    scanf("%lld", &r);
    printf("Enter number of terms: ");
    scanf("%d", &n);

    long long term = a;
    for (int i = 0; i < n; i++) {
        printf("%lld ", term);
        term *= r;
    }

    printf("\n");
    return 0;
}
