// Given a string s, print the characters at even positions (2nd, 4th, 6th, ...) in a single line.
// Positions are counted starting from 1.
// Examples:

// Input: s = "Python"
// Output: y h n
// Input: s = "Programming"
// Output: r g a m n

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';  // remove the newline fgets keeps

    for (int i = 1; i < (int)strlen(s); i += 2) {
        printf("%c ", s[i]);
    }

    printf("\n");
    return 0;
}
