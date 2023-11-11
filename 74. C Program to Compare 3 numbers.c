//25-Days-75-Questions-C-Coding-Challange
//Day 25 : 29-oct-2023
// Question No. 74 : C Program To Compare Three Integers

#include <stdio.h>

int main() {
    int a, b, c;
  
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("All three integers are equal.\n");
    } else if (a == b || b == c || a == c) {
        printf("Two integers are equal.\n");
    } else {
        printf("All three integers are different.\n");
    }

    return 0;
}
