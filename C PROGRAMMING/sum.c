// program to find the sum of first n natural numbers
// I have written it myself!!


#include<stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum = n*(n+1)/2; // dont forget to write int sum..int is imp as we are defining a variable here
    printf("The sum of numbers is: %d", sum);
    return 0;}
    // sum = n(n+1)/2 is wrong as just brackets dosent mean multiplicationfor the compiler
    // sum = n*(n+1)/2 is correct!
    