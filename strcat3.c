// To undestand the different ways to use this function of strcat in c.
#include <stdio.h>
#include <string.h>

int main () {
    char firstName [30] = "Palak";
    char secondName [] = " Chuahan"; // The space to increase the readability of the output.
    // This cannot be done as the result of strcat is a pointer and so it cannot be assigned to a char array (string) : char result [20] = strcat(firstName, secondName);
    printf("The full name is : %s\n", strcat(firstName, secondName)); // see how the coplete thing was stored in first string.    
    return 0;
}
// Either call strcat then write printf and print the value of firstName as it is modifies their or just directly printf strcat.
// NOTE : firstName must have enough space to hold the concatenated redult incase of using firstName in printf.
