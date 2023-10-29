// 25-Days-75-question-C-Challenge
// Day 18 : 22-oct-2023
// Question no. 52 : C Program to Access Array Elements Using Pointer

#include <stdio.h>
int main() {
    int data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));
    return 0;
}
