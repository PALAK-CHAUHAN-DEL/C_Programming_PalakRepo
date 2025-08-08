// To understand the concept of malloc in dynamic memory allocation.
#include <stdio.h>
int main () {
    int *ptr;
    ptr = (int *) malloc (5 * sizeof (int));

    ptr [0] = 0;  //We have to assign values individually and not alltoghter like arrys. As it is not applicable here.
    ptr [1] = 1;
    ptr [2] = 2;
    ptr [3] = 3;
    ptr [4] = 4;

    printf ("The elements in the array are : \n");
    for (int i = 0; i < 5; i++) {
    printf ("%d\n", ptr [i]);
    }
    return 0;
}