// A program to reverse an array.
#include <stdio.h>
int main () {
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    printf ("Enter the elements of array");
    for (int i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }
    for (int i = 0; i < n/2; i++) {
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }
    printf ("The reversed array is : \n");
    for (int i = 0; i < n; i++) {
        printf ("%d\n", arr[i]);
    }
    return 0;
}
