// 25-Days-75-question-C-Challenge
// Day 24 : 28-oct-2023
// Question no. 72 : C Program to Find GCD of two Numbers (Using for loop and if Statement)

#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);

    return 0;
}
