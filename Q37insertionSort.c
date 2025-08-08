// A basic insertion sort code, used to sort an array.

#include <stdio.h>

void sort (int arr[5], int n) {
     for (int i = 1; i < n; i++) {
        int current = arr[i]; // element
        int previous = i-1; // index
        while (previous >= 0 && arr[previous] > current) {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
     }
}

void printArray (int arr[5], int n) {
    for (int i = 0; i < n; i++) {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
}

int main () {
    int arr[] = {4, 3, 2, 1, 5};
    int n = 5;
    sort (arr, n);
    printf ("The sorted array is : ");
    printArray (arr, n);
    return 0;
}