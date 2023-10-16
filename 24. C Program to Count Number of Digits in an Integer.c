// 25-Days-75-Question-C-Coding-Challenge
// day 08
// Question number 23 : C Program to Count Number of Digits in an Integer

#include <stdio.h>
int main() {
  long long n;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%lld", &n);
 
  do {
    n /= 10;
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
}

