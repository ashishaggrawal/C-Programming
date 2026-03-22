// Given a number as a string, type cast it to an int and print double its value.
// Input: "15"
// Output: 30

#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[20];

    printf("Enter a number: ");
    scanf("%19s", s);

    int n = atoi(s);  // atoi converts a string to an int
    printf("%d\n", n * 2);
    return 0;
}
