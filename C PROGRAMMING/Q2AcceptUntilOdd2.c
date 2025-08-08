// waf to keep taking input from the user unless they enter an odd number.
#include <stdio.h>
int main () {
int n;
do {
    printf ("Enter the number : ");
    scanf ("%d", &n);
    printf ("%d\n", n);

    if (n % 2 == 1) {
        break;
    }
    } while (1); // this means while is always true. It is to create an infinite loop.
    printf ("Cannot enter any more no as u have entered an odd no.\n");
    return 0;
} 
