// Practice the different ways to use printf().
// Output:
// Hello Python
// Hello-Python
// Hello Python on the same line
// 10 + 20 = 30

#include <stdio.h>

int main() {
    printf("Hello %s\n", "Python");        // %s is replaced by a string
    printf("%s-%s\n", "Hello", "Python");  // put any separator between values
    printf("Hello Python ");               // no \n, so the next print stays on this line
    printf("on the same line\n");
    printf("%d + %d = %d\n", 10, 20, 10 + 20);  // %d is replaced by an int
    return 0;
}
