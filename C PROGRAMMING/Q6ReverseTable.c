// To print the reverse of a table.
#include <stdio.h>
int main () {
    int n;
    printf ("Enter the value of no whose table is to be printed in reverse : ");
    scanf ("%d", &n);
    printf ("The table in reverse is : \n");
    for (int i = 10; i >= 1; i--) {
        printf ("%d\n", n*i);
    }
    return 0;
}