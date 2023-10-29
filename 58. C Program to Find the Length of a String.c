// 25-Days-75-question-C-Challenge
// Day 20 : 24-oct-2023
// Question no. 58 : C Program to Find the Length of a String

#include <stdio.h>
int main() {
    char s[] = "Programming is fun";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}
