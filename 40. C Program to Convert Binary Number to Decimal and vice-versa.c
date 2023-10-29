// 25-Days-75-question-C-Challenge
// Day 14 : 19-oct-2023
// Question no. 40 : C Program to Convert Binary Number to Decimal and vice-versa

// convert binary to decimal

#include <stdio.h>
#include <math.h>

// function prototype
int convert(long long);

int main() {

  long long n;

  printf("Enter a binary number: ");
  scanf("%lld", &n);

  printf("%lld in binary = %d in decimal", n, convert(n));

  return 0;
}

// function definition
int convert(long long n) {

  int dec = 0, i = 0, rem;

  while (n != 0) {

    // get remainder of n divided by 10
    rem = n % 10;

    // divide n by 10
    n /= 10;

    // multiply rem by (2 ^ i)
    // add the product to dec
    dec += rem * pow(2, i);

    // increment i
    ++i;
  }

  return dec;
}
