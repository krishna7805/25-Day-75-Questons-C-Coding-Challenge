// 25-Days-75-Question-C-Coding-Challenge
// Day 6
// program no. 17 : Sum of Natural Numbers Using for Loop

#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

