// A better way of finding out the count of vowel in a string. Almost done it myself.
#include <stdio.h>
#include <string.h>
void vowelCount (char str[]) {
    int count = 0;
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; str[i] != '\0'; i++) {
         for (int j = 0; vowels[j] != '\0'; j++) {
            if (str[i] == vowels[j]) {
                count++;
                break; // This will only exit the inner for loop.
            }
         }
    }
    printf ("The count of vowels in the given string is : %d", count);
}

int main () {
    char str[100];
    printf ("Enter the string : ");
    fgets (str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // Removes the newline character if present
    vowelCount (str);
    return 0;
}