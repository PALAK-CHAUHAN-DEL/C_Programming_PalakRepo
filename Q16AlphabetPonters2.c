// another way to solve the same q.This seems better to me.

#include <stdio.h>

int main() {
    char ch = 'a';
    char *ptr = &ch;

    printf("Lowercase a-z: ");
    for (int i = 0; i < 26; i++) {
        printf("%c ", *ptr);
        (*ptr)++;  // increases the value of the char at the address that this pointer points to.
    }

    return 0;
}
