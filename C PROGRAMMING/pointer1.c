// To understand the the condcept of pointers in c.
#include <stdio.h>
int main () {
    int age  = 10;
    int *ptr =  &age; // int pointer pointintg to the address of age.
    printf ("Address of age variable in hexadecumal form is : %p\n", ptr); // %p is the format specifier for pointer. Gives address in hexadecimal form.
    printf ("The address of age variable in decimal form is : %u\n", ptr); // %u is the format specifer for unsigned int. Gives address in decimal form (numbers form).

    // trying different ways to print the value of the age. All of these will give the same output.
    printf ("Value of age is : %d\n", age);
    printf ("Value of age is : %d\n", *ptr);
    printf ("value of age is : %d\n", *(&age));
    return 0;
}