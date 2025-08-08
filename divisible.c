// A program to check if a number is divisible by 2 or not!
#include<stdio.h>
int main() 
   { int number;
    printf("Enter the number \n");
    scanf("%d", &number);
    if(number%2==0)
    printf("The number is divisible by 2");
    else
    printf("The number is not divisible by 2");
    return 0;}