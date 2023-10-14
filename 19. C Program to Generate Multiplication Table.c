// 25-Days-75-Question-C-Coding-Challenge
// Day 07
// Question no. 19: C Program to Generate Multiplication Table

#include <stdio.h>
int main() {
  int a,m;
  printf("Enter an integer: ");
  scanf("%d", &a);

  for (int i = 1; i <= 10; ++i) {
      m = a * i;
    printf("%d * %d = %d \n", a, i,m);
  }
  return 0;
}
