// Given a string s and a number n, print s n times, each on a new line.
// Input: s = Hi, n = 3
// Output:
// Hi
// Hi
// Hi

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';  // remove the newline fgets keeps

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", s);
    }
    return 0;
}
