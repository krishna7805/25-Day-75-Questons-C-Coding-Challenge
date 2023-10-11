// 25-Days-75-Question-C-Coding-Challange
// Day 04
// Question number 11 : C Program to Check Vowel or consonant

#include<stdio.h>
int main()
{
    char c;
    int lowercase_vowel , uppercase_vowel ;
    printf("Enter alphabet\n");
    scanf("%c", &c);
    
     // LOWERCASE VOWEL
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // UPPERCASE VOWEL
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
        
    return 0;
}
