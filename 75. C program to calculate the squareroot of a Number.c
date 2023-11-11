//25-Days-75-Questions-C-Coding-Challange
//Day 25 
// Question No. 75 : C program to calculate the squareroot of a Number

#include <stdio.h>
#include <math.h>

int main() {
    float number, sqrt;

    printf("Enter a number: ");
    scanf("%f", &number);

    if (number >= 0) {
        sqrt = sqrtf(number);
        printf("Square root of %.2f is %.2f\n", number, sqrt);
    } else {
        printf("Cannot calculate the square root of a negative number.\n");
    }

    return 0;
}
