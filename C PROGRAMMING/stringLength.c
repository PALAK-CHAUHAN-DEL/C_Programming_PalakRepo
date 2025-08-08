// Using the string.h header fiel to calculate the length of the string.
#include <stdio.h>
#include <string.h>

int main () {
    char name[100];
    printf ("Enter your name : ");

    fgets (name, 100, stdin);
    name[strcspn(name, "\n")] = '\0'; // This is to remove the newline character if present which it includes in the count of length.

    int length  = strlen(name); // it will also include spaces in the final output.
    printf ("The length of the name is : %d\n", length);
    return 0;
}
// Ask gpt for any further doubts.