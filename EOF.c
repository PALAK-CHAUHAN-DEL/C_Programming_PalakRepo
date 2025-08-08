//To understnd EOF, refer to pg 52 of notes, also the text file EOF.txt will be used here.
#include <stdio.h>
int main () {
        FILE *fptr;
        fptr = fopen ("EOF.txt", "r");
        char ch;
        ch = fgetc (fptr); // Initialising ch before use.
        while (ch != EOF) {
            // Keep storing the upcoming char in ch.
            ch = fgetc (fptr); // fgetc means read a ch and fgets means read a string.
            // Keep printing until it hits EOF.
            printf ("%c", ch); 
        }
        fclose (fptr);
        return 0;
}