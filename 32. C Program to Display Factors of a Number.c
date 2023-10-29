// 25-Days-75-question-C-Challenge
// Day 11 : 18-oct-2023
// Question no. 32 : C Program to Display Factors of a Number

#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
