// pass by reference in c
#include <stdio.h>
int _square (int *n) { // we are declaring n as a pointer here.
    *n = (*n) * (*n); // pg 36 front of book 
    printf ("Square = %d\n", *n);
}

int main () {
    int number = 4;
    _square (&number); // we are passing the address of number variable.
    printf ("Number = %d\n", number);
    return 0;
}