// Wap to allocate memory to store first 5 odd no then reallocate it to store first 6 even numbers.
// The complete logic is mine, with just a few errors.
// Well done Palak.
#include <stdio.h>
#include <stdlib.h>

int main () {
    int *ptr;
    int n = 5;
    int p = 0;
    ptr = (int *) malloc (n * sizeof (int));
    printf ("The first 5 odd numbers are : \n");
    for (int i = 0; i < n * 2; i++) {
        if (i % 2 != 0 && p < n) {
            ptr[p] = i;
            printf("%d\n", ptr[p]);
            p++;
        }
    }
    ptr = realloc(ptr, 6 * sizeof(int));
    int q = 0;
    int x = 6;
    printf("The first 6 even numbers are : \n");
    for (int i = 0; i < x * 2; i++) {
        if (i % 2 == 0 && q < x) {
            ptr[q] = i;
            printf("%d\n", ptr[q]);
            q++;
        }
    }
    free(ptr);
    return 0;
}
/*The condition i < n * 2 is used to ensure you find enough odd (or even) numbers to fill your array.

For the first 5 odd numbers, you need to check numbers from 0 upwards and pick only the odd ones.
Since only half of the numbers in a range are odd, you need to check up to at least 2 * n numbers to guarantee you get n odd numbers.
For example, for n = 5, you check i from 0 to 9:

Odd numbers in this range: 1, 3, 5, 7, 9 (total 5)
This ensures your array is filled with the first 5 odd numbers. The same logic applies for even numbers.*/