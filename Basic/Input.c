// Take a name and an age from the user and print them.
// Input: name = Ashish, age = 25
// Output: Hello Ashish, next year you will be 26

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\r\n")] = '\0';  // remove the newline fgets keeps

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %s, next year you will be %d\n", name, age + 1);
    return 0;
}
