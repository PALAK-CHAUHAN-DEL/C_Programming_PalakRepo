// wap to find max no btw two numbers using pointers.
#include <stdio.h>
void maxNo (int a , int b, int *max) {
    if (a > b) {
        *max = a;
    } else {
        *max = b;
    }
    printf ("Max is : %d\n", *max);
}
int main () {
    int a = 5, b = 3;
    int max;
    maxNo (a, b, &max);
    return 0;
}
