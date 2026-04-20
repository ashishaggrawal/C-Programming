// Given three numbers a, b and c, print the greatest of them.
// Input: a = 10, b = 3, c = 2
// Output: 10

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        printf("%d\n", a);
    } else if (b >= c) {
        printf("%d\n", b);
    } else {
        printf("%d\n", c);
    }
    return 0;
}
