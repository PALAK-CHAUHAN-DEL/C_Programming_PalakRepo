// doing it without creating any new function.
// refer to page 38 front of book. We are basically not creating any other function here.
#include <stdio.h>

int main () {
    int x = 3;
    int y = 5;
    printf ("X = %d\n", x);
    printf ("Y = %d\n", y);

    int temp = x;
    x = y;
    y = temp;
    printf ("X = %d\n", x);
    printf ("Y = %d\n", y);
    return 0;
    
}