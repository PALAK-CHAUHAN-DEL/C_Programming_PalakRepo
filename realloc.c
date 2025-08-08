// Wap to allocate memory for 5 students. Then dynamically increase it to 8 numbers.
#include <stdio.h>
#include <stdlib.h>
int main () {
    int *ptr;
    ptr = (int*) malloc (5 * sizeof(int));
    ptr [0] = 1;
    ptr [1] = 2;
    ptr [2] = 3;
    ptr [3] = 4;
    ptr [4] = 5;
    printf ("The elements in the array are : \n");
    for (int i = 0; i < 5; i++) {
        printf ("%d\n", ptr [i]);
    }
    ptr = (int*) realloc (ptr, 8 * sizeof (int));
    ptr [5] = 1;
    ptr [6] = 2;
    ptr [7] = 3;
    printf ("The elements in the array after realloc are : \n");
    for (int i = 0; i < 8; i++) {
        printf ("%d\n", ptr [i]);
    }
    free (ptr); // Always write this at end if u have dynamically allocated memory.
    return 0;
}