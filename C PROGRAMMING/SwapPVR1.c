// Watch c tutorial of shraddha (6:06).
#include <stdio.h>

void swap (int *a, int *b) {
    int t = *a; // t here basically is the extra bucket used to trmporarily hold the water of the buckets a and b to swap the  waters in them.
    *a = *b;
    *b = t;
    printf ("Values after swapping are : %d, %d\n", *a, *b);
}
int main () {
    int x = 4, y = 5;
    swap (&x, &y);
    printf ("The original values now are : %d, %d\n", x, y);
    return 0;
}