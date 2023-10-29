// 25-Days-75-question-C-Challenge
// Day 13 : 19-oct-2023
// Question no. 37 : C Program to Find the Sum of Natural Numbers using Recursion


#include <stdio.h>

int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}
