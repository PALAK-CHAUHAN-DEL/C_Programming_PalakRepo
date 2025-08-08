// To understnd the basic use of file operators, we have created a demo file by the name of Test.txt...just for reference.
// This includes bith basic file operations and a way to check if a file exists or not, check notes pg 50 of notes.
#include <stdio.h>
int main () {
    FILE *fptr; // Declaring a file pointer.
    fptr = fopen ("Test.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    // File operations go here
    fclose(fptr); //Simply closing the file as we have got nothing to do!
    return 0;
}