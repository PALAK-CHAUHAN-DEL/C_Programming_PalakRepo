/*A program to print the sum of 1st n natural no and print them in reverse order
with just one for loop....take a birds eye view of the forloopsum.c file before 
going thriugh this one...also try to write this your self!*/  

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n); // i beg u to not a make a mistake of writing \n in scanf!!

    int sum = 0; // also define this int sum = 0 outside the for loop and not inside!
    for(int i=1 , j=n; i<= n && j>=1 ; i++,j--) {
        sum += i;
        printf("The sum of the numbers is: %d\n",sum);
        printf("The numbers in reverse order are : ");
        printf("%d\n",j);}
    return 0;}
