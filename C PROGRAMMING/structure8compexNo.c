// Waf to store complex no using arrow notation in structure.
// Just try to undersgand this code.

#include <stdio.h>
#include <string.h>

struct complex {
    int real;
    int img;
};

int main () {
    struct complex c1, c2, result; // declaring names of the variables storing complex no at once.
    struct complex *ptr1 = &c1;
    struct complex *ptr2 = &c2;
    struct complex *ptrResult = &result;

    ptr1->real = 1;
    ptr1->img = 2;

    ptr2->real = 3;
    ptr2->img = 4;

    ptrResult->real = ptr1->real + ptr2->real;
    ptrResult->img = ptr1->img + ptr2->img;
    printf ("The sum of the two complex numbers is : (%d + %di)\n", ptrResult->real, ptrResult->img);

    return 0;
}