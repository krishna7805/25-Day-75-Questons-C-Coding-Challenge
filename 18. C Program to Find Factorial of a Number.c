// 25-Days-75-Question-C-Coding-Challenge
// Day 6
// program no. 18 : C Program to Find Factorial of a Number

#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

  
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
      // because factorial of a negative number does not exist 
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
