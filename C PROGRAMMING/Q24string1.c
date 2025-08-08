// Create a string firstName and lastName to store detalils of user and print 
// all the characters using a loop. Try to do it yourself.
#include <stdio.h>
void printString (char arr[]) { 
    for (int i = 0; arr[i] != '\0'; i++) {
        printf ("%c", arr[i]);
    }
    printf ("\n");
}

int main () {
    char firstName[] = "Palak";
    char secondName[] = "Chauhan";

    printString (firstName);
    printString (secondName);
    return 0;
}