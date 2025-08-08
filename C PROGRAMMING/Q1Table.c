// Waf to frint the table of a number input by the user. Ok so yeah, after this long too i have written it myself.
#include <stdio.h>
int main () {
    int n;
    printf ("Enter the number whose table is to be printed :");
    scanf ("%d", &n);
    int table = 1;
    printf ("The table is : \n");
    for (int i = 1; i <= 10; i++) {
        table = n*i;
        printf ("%d\n", table);
    } 
    return 0;
}