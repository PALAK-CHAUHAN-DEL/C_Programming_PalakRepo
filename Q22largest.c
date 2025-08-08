// Waf to print the largest element of the array.Done it myself.

#include <stdio.h>
#include <limits.h>

void largest (int arr[], int n) {
     int max = INT_MIN;
     for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
     }
     printf ("The largest element in the array is : %d\n", max);
}

int main () {
    int arr[] = {5, 4, 3, 7};
    int n = sizeof (arr)/sizeof (arr[0]);
    largest (arr, n);
    return 0;
}
     
