// Waf named slice, which takes a string and returns a sliced string from index n to m.
#include <stdio.h>
#include <string.h>

void sliceString (char str[], int n, int m) {
    char slice [m - n + 1]; // +1 for null terminator
    int j = 0;              // We need a separate index for filling slice string with appropriate characters.
    for (int i = n; i <= m; i++) {
        slice [j++] = str[i];  // ask gpt for the working of this slice[j++];
    }
    slice[j] = '\0'; // Null-terminate the string
    printf ("The sliced string is : %s", slice);
}

int main () {
    int n, m;
    printf ("Enter the starting index of the string to be sliced : ");
    scanf ("%d", &n);
    printf ("Enter the ending index of the string to be sliced : ");
    scanf ("%d", &m);
    char str[] = "Palak Chaunah";
    sliceString (str, n, m);
    return 0;
}