// Make a program to read 5 int from a file.We will refer to EOF.txt for this code. Yay! I have written it myself.
//Good going Palak.

#include <stdio.h>
int main () {
    FILE *fptr;
    fptr = fopen ("EOF.txt", "r");
    char ch;
    for (int i = 1; i <= 5; i++) {
         ch = fgetc(fptr);
         printf ("%c\n", ch);
    }
    fclose (fptr);
    return 0;
}