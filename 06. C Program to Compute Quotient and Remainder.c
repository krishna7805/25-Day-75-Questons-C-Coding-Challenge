// 25-Days-75-Questions-C-Coding-Challange
//Question number 06: Program to Compute Quotient and Remainder
#include<stdio.h>
int main()
{
    int Divident, Divisor, Remainder, Quitiont ;
    printf("Enter divident :");
    scanf("%d",&Divident);
    
    printf("Enter Divisor :");
    scanf("%d", &Divisor );
    
    Quitiont = Divident / Divisor ;
    printf("Quotient = %d",Quitiont);
    
    Remainder = Divident % Quitiont;
    printf("\nRemainder =%d",Remainder);
    return 0;
}
