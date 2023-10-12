// 25-Days-75-Question-C-Coding-Challange
// Day 04
// Question number 15 :C Program to Check Whether a Number is Positive or Negative

#include <stdio.h>

int main() {

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    } 
    else
        printf("You entered a positive number.");

    return 0;
}
