// To understand the use of strcpy.
#include <stdio.h>
#include <string.h>

int main () {
    char newStr[] = "Palak";
    char oldStr[] = " Chauhan";
    strcpy (newStr, oldStr); // Copying the content of oldStr to newStr
    printf ("The new string is : %s\n", newStr);
    return 0;
}