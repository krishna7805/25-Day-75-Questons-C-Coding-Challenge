// 25-Days-75-Questionsns-C-Coding-Challenge
// Day 03 : ( 10-oct-23 ) ;
//Question number 07 : C Program to Find the Size of int, float, double and char

#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %zu bytes\n", sizeof(intType));
  
    printf("Size of float: %zu bytes\n", sizeof(floatType));
  
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
  
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}
