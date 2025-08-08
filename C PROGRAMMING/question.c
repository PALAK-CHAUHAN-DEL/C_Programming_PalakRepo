// a program to print numbers from 0 to n where n is given by the user
// i wasent able to write this code myself for the 1st time!..try to do it yourself!
#include<stdio.h>
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}   