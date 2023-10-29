// 25-Days-75-question-C-Challenge
// Day 15 : 20-oct-2023
// Question no. 43 : C Program to Reverse a Sentence Using Recursion

#include <stdio.h>
void reverseSentence();
int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
