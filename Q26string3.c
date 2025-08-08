// Wap to input a string from user using %c.
#include <stdio.h>

int main () {
    char str[100];
    char ch;
    int i = 0;

    printf("Enter a character (press Enter to stop): ");
    while (ch != '\n' && i < 99) {  // \n here means it is asking to stop ones user presses enter. 
        scanf ("%c", &ch);
        str[i] = ch;
        i++;
    }
    str [i] = '\0';  // as while using %c \0 is not created automatically, we have to add it at the last value of i.
    printf("U entered : %s\n", str); // I could have used puts here.
    return 0;
}

