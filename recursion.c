// To understand the concept of recursion.
#include <stdio.h>

void recursive (int n) {
    if (n == 0) {
        return;
    }
    printf ("Hello Palak\n");
    recursive (n - 1); // as it already print once due to the previous command;
}
int main () {
    int n;
    printf ("Enter the value of n : ");
    scanf ("%d", &n);
    recursive (n);
    return 0;
}