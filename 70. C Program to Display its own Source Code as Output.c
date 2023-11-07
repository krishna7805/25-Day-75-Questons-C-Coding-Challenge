// 25-Days-75-question-C-Challenge
// Day 24 : 28-oct-2023
// Question no. 70 : C Program to Display its own Source Code as Output

#include <stdio.h>
int main() {
    FILE *fp;
    int c;
   
    // open the current input file
    fp = fopen(__FILE__,"r");

    do {
         c = getc(fp);   // read character 
         putchar(c);     // display character
    }
    while(c != EOF);  // loop until the end of file is reached
    
    fclose(fp);
    return 0;
}
