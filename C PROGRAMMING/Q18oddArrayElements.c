// A program to return the count of add elements in the given array.
#include <stdio.h>
int main () {
    int arr[5];
    int n = sizeof (arr)/ sizeof (arr[0]);
    printf ("Enter the elements of the array : \n");
    for (int i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }
    int count = 0;
    printf ("The count of odd elements in the array is : ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            count ++;
        } else {
            continue;
        }
    }
    printf ("%d\n", count);
    return 0;
}