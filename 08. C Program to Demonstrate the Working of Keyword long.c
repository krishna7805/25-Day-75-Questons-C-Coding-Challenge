// 25-Days-75-Questionsns-C-Coding-Challenge
// Day 03 : ( 10-oct-23 ) ;
//Question number 08 : C Program to Demonstrate the Working of Keyword long

#include<stdio.h>
int main() 
{
    int a;
    long b;  
    long long c;
    double e;
    long double f;

    printf("Size of int = %zu bytes \n", sizeof(a));
  
    printf("Size of long int = %zu bytes\n", sizeof(b));
  
    printf("Size of long long int = %zu bytes\n", sizeof(c));
  
    printf("Size of double = %zu bytes\n", sizeof(e));
  
    printf("Size of long double = %zu bytes\n", sizeof(f));
    
    return 0;
}
