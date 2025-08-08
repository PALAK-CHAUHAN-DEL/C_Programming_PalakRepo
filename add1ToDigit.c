// This is a program to add one to every digit of the given number. Try to write it yourself, it's not a big deal.
#include <stdio.h>
int main () {
    int n;
    printf("Enter the value of n : \n");
    scanf ("%d", &n);
    if (n < 0) {
        printf("Please enter a positive number.\n");
        return 1; // Exit if the input is negative
    }
    int power = 1, new = 0, digit  = 0, sum = 0;
while (n > 0) {
    digit  = n % 10 + 1;
    if (n % 10 == 9) {
        new = 0;
    } else {
        new = digit * power;
    }
    sum += new;
    n /= 10;
    power *= 10;
}
    printf ("The new digit is : %d\n", sum);
    return 0;
}