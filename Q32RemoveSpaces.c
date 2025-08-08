// To remove all the blank spaces from the string. Try to write it yourself.
#include <stdio.h>

void removeSpaces(char str[]) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    removeSpaces(str);
    printf("String without spaces: %s", str);
    return 0;
}
/*If the condition str[i] != ' ' does not hold true (meaning str[i] is a space),
then the code inside the if block is skipped, and nothing is copied to str[j].
Only i is incremented, so the space is effectively removed from the output string.
The next non-space character will be copied to the current j position, overwriting the space.*/

//--------------------------------------------------------------------------------------------------------

/*In C, while (str[i]) is a common shorthand for while (str[i] != '\0').

Here's why:

Strings in C end with the null character '\0', which has the value 0.
In a condition, str[i] is true (nonzero) for any character except '\0'.
When str[i] reaches the null terminator, the loop stops.
So, while (str[i]) keeps looping through the string until it reaches the end.
It is a proper and valid condition in C for iterating over a string.*/