// a program to print no. from 0 to n where n is given by the user
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");

    scanf("%d", &n); /*here if u write "%d\n" then while running the code u will have
    to enter an unwanted thing to make the code run...pls dont make this mistake again!*/

    int i = 0;
    while (i <= n) { 
        printf("%d\n", i);
        i++;
    }

    return 0;
}