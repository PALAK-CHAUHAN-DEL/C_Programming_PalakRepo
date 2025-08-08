// To undestand the different ways to use this function of strcat in c.
#include <stdio.h>
#include <string.h>

int main () {
    char firstName [] = "Palak";
    char secondName [] = " Chuahan"; // The space to increase the readability of the output.
    char result [20];
    strcat(result, firstName); // Concatenating firstName to result
    strcat(result, secondName); // Concatenating secondName to result
    printf("The full name is : %s\n", result); // see how the coplete thing was stored in first string.    
}
