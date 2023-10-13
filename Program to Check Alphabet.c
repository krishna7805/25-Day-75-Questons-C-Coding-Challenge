// 25-Days-75-Question-C-Coding-Challenge
// Day 6
// program no. 16 : Program to Check Alphabet


#include<stdio.h>
int main()
{
    char c;
    printf("Enter Character \n");
    scanf("%c", &c);
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    printf("%c is an alphabet \n", c);
    
    else
    printf("%c is not an alphabet \n", c);
    
}
    
    return 0 ;
    
}
