// Waf to store the table of 2 and 3 in 2d array.
// Yes i have written the logic myself, with minor errors.
#include <stdio.h>
int main () {
    int arr[2][10];
    int x, y;
    printf ("Enter the values x and y whose tables are to be printed : ");
    scanf ("%d %d", &x, &y);  // making the more dynamic.
    int rows = 2, columns = 10;
    for (int i = 1; i <= columns; i++) {
        arr[0][i-1] = x * i;
        arr[1][i-1] = y * i;
    }
    printf("Table of %d and %d:\n", x, y);      // This is how 2d arrays are printed.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}