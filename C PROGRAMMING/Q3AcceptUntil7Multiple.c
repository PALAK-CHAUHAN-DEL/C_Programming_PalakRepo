// waf to keep taking input until the user enters a no that is the multiple of 7.
// very simple, written it myself.
#include <stdio.h>
#include <limits.h>
int main () {
    int n;
    do {
        printf ("Enter the number : ");
        scanf ("%d", &n);
        printf ("The no entered is : %d\n", n);
        if (n % 7 == 0) {
            break;
        }
    } while (1);
    printf ("Cannot enter any more no as u have entered a no tha is a multiple of 7.\n");
    return 0;
}