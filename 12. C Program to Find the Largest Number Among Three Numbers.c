// 25-Days-75-Question-C-Coding-Challange
// Day 04
// Question number 12 : C Program to Find the Largest Number Among Three Numbers
#include <stdio.h>

int main() {
  double num1, num2, num3;

  printf("Enter three different numbers: ");
  scanf("%lf %lf %lf", &num1, &num2, &num3);

  // if num1 is greater
  if (num1 >= num2 && num1 >= num3)
    printf("%.2f is the largest number.", num1);

  // if num2 is greater
  if (num2 >= num1 && num2 >= num3)
    printf("%.2f is the largest number.", num2);

  // if num3 is greater
  if (num3 >= num1 && num3 >= num2)
    printf("%.2f is the largest number.", num3);

  return 0;
}
