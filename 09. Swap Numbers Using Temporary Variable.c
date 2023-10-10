// 25-Days-75-Questionsns-C-Coding-Challenge
// Day 03 : ( 10-oct-23 ) ;
//Question number 09 : Swap Numbers Using Temporary Variable

#include<stdio.h>
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  
  printf("Enter second number: ");
  scanf("%lf", &second);
  
  temp = first;

  first = second;

  second = temp;

  printf("After swapping");
  printf(" \nfirst number = %.2lf\n", first);
  printf("second number = %.2lf", second);
  return 0;
}
