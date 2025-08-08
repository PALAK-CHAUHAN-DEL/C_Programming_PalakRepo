// waf to print the factorial of a number.
#include <stdio.h>
int main () {
    int n;
    int factorial = 1;
    printf ("Enter the value of the no whose factorial is to be found : ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf ("The factorial of %d is %d\n", n, factorial); // this is the imp line here, learn how to write.
    return 0;
}