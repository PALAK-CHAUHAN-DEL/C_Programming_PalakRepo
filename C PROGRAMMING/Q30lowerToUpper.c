// Wap to converta all lower case characters to upper case characters.
// Finally written it myself.
#include <stdio.h>
#include <ctype.h> // To perform operations on characters.

void lowerToUpper (char str[]) {
     for (int i  = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
     }
     printf ("The new string is : %s", str);
}

int main () {
    char str[100];
    printf ("Enter the string : ");
    scanf ("%s", str);
    lowerToUpper(str);
    return 0;
}


