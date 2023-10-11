// 25-Days-75-Question-C-Coding-Challange
// Day 04
// Question number 10 : C Program to Check Even or Odd

#include <stdio.h>
int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // we know if number is completely divided by 2 then the number is even 
    if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
    
    return 0;
}
