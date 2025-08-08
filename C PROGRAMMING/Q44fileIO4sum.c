// 2 numbers - a & b, are written in a file. Write s program to replace them with their sum.
// I have created a text file with the name of sum.txt before hand to use it in this code.
// Good going Palak...written it myself.

#include <stdio.h>
int main () {
    FILE *fptr;
    fptr = fopen ("sum.txt", "r");
    if (fptr == NULL) {
        printf ("File doesn't exist!\n");
        return 1;
    }
    int n, m, sum;
    fscanf (fptr, "%d", &n);
    fscanf (fptr, "%d", &m);
    sum = n + m;
    fclose (fptr);

    fptr = fopen ("sum.txt", "w");
    fprintf (fptr, "The sum is : %d", sum);
    printf ("Data overwritten as sum.");
    fclose (fptr);
    return 0;
}