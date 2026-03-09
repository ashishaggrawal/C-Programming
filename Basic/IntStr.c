// Given an integer n and a string s, print them together on one line.
// In C an int is printed with %d and a string with %s.
// Input: n = 5, s = "Apples"
// Output: 5 Apples

#include <stdio.h>

int main() {
    int n;
    char s[100];

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a string: ");
    scanf("%99s", s);

    printf("%d %s\n", n, s);
    return 0;
}
