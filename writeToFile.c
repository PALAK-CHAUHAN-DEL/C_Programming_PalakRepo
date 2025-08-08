// To see how the write operation works on files. This will be tested on Write.txt file.
#include <stdio.h>
int main () {
    FILE *fptr;
    fptr = fopen ("Write.txt", "w");
    fprintf (fptr, "%c", "M");
    fprintf (fptr, "%c", "A");
    fprintf (fptr, "%c", "N");
    fprintf (fptr, "%c", "G");
    fprintf (fptr, "%c", "O");
    fclose (fptr);
    return 0;
}
// Try opening this file in different modes like "a", and then compile and run and see the change yourself.