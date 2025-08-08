// Waf to convert lower case to upper and upper to lower.Done this myself too.
#include <stdio.h>
#include <ctype.h>

void changeCase (char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    printf ("The new string is : %s", str);
}

int main () {
    char str[99];
    printf ("Enter the string : ");
    scanf ("%s", str);
    changeCase (str);
    return 0;
}