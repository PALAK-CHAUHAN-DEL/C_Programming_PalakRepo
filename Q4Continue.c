// waf to print all the odd no from 5 to 50.
#include <stdio.h>
int main () {
    int n = 50;
    printf ("All the odd no from 5 to 50 are : \n");
    for (int i = 5; i <= 50; i++) {
        if (i % 2 == 0) {
            continue;
        } else {
        printf ("%d\n", i);
        }
    }
    return 0;
}