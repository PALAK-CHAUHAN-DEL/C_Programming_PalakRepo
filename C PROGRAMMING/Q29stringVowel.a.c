// Waf to count the number of cowels in the given string.
#include <stdio.h>
#include <string.h>

void countVowels (char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count ++;
         }
    }
     printf ("The count of vowels in the given string is : %d", count);
}

int main () {
    char str[100];
    printf ("Enter the string : ");
    fgets (str, 100, stdin);
    countVowels (str);
    return 0;
}


