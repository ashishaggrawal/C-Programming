// Given a year, print "Leap Year" if it is a leap year, otherwise "Not a Leap Year".
// A year is a leap year if it is divisible by 4 but not by 100, or if it is divisible by 400.
// Input: 2000
// Output: Leap Year
// Input: 1900
// Output: Not a Leap Year

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }
    return 0;
}
