// 25-Days-75-Question-C-Coding-Challenge
// Day 2
// Question number 04 : C Program to Multiply Two Floating-Point Numbers

#include<stdio.h>
int main()
{
  float x,y,z;
  printf("Enter two number\n");
  scanf("%f %f",&x,&y);
  z = x * y;
  printf("Multiplication of two number is \n=> %f * %f = %f",x,y,z);
  return 0;
  
}
