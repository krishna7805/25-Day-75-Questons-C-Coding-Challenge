// 25-Days-75-question-C-Challenge
// Day 24 : 28-oct-2023
// Question no. 71 : C Program to Print Pyramids and Patterns

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

