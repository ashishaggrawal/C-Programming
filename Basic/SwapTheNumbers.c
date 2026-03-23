// Given two numbers a and b, swap them and print the new values.
// Input: a = 10, b = 20
// Output: 20 10

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    int temp = a;
    a = b;
    b = temp;

    printf("%d %d\n", a, b);
    return 0;
}
