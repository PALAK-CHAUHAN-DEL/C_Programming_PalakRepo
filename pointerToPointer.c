// Uk what this is for ...right?
#include <stdio.h>
int main (){
    int x = 5;
    int *ptr = &x;
    int **ptr2 = &ptr;

    // extracting the value of x using different methods, we get the same output in all the casaes.
    printf ("Value of x is : %d\n", x);
    printf ("Value of x is : %d\n", *ptr);
    printf ("Value of x is : %d\n", **ptr2);
    return 0;
}