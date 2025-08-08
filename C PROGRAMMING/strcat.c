// To undsertand the use of strcat in c
#include <stdio.h>
#include <string.h>

int main () {
    char firstName [50] = "Palak";
    char secondName[] = " Chauhan"; // The spcace to increase the readability of the output.
    strcat (firstName, secondName);
    printf ("The full name is : %s\n", firstName); // see how the coplete thing was stored in first string.
    // Note: firstName must have enough space to hold the concatenated result.
    return 0;
}
// Another way was to store the value of strcat in a new variable and then print that.