// Given two numbers a and b: if a is even, print a then b; otherwise print b then a.
// Input: a = 2, b = 3
// Output: 2 3
// Input: a = 5, b = 8
// Output: 8 5

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    if (a % 2 == 0) {
        printf("%d %d\n", a, b);
    } else {
        printf("%d %d\n", b, a);
    }
    return 0;
}
