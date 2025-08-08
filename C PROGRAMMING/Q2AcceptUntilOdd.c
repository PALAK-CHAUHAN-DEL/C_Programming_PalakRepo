// Write a program that inputs numbers until the user inputs an odd number. Written myself. Good!
// It is advised to use a do while loop here, but cuz we want to use a break statement we are using different method.

#include <stdio.h>
#include <limits.h>
int main () {
    int n = 0;
    
    for (int i = 0; i < INT_MAX; i++) {
        printf ("Enter the number : ");
        scanf ("%d", &n);
        if (n % 2 == 1) {
            break;
        }
    }
    printf ("Cannot enter any more values as u have entered an odd number.\n");
    return 0;
}