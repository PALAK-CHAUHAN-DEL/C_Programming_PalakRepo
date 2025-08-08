// Wap to write all the odd numbers from 1 to n in a file.
// Look out for the file OddNumbers.txt for the changes.
// Good going Palak...written it myself.
#include <stdio.h>
int main () {
    FILE *fptr;
    fptr = fopen ("OddNumbers.txt", "w");
    int n;

    printf ("Enter till where odd are to be printed : ");
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            fprintf (fptr, "%d\n", i);
        }
    } 
    fclose (fptr);
    return 0;
}