// Given two numbers a and b, print their GCD (Greatest Common Divisor).
// Input: a = 12, b = 18
// Output: 6

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a);
    return 0;
}
