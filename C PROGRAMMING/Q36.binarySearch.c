// A basic code on binary search.

#include <stdio.h>

int search (int arr[10], int key , int n) {
    int start = 0; 
    int end = n - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (key > arr[mid]) {
            start = mid + 1;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }    return -1;
}

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, key;
    
    printf ("Enter the key to be searched : ");
    scanf ("%d", &key);

    int result = search (arr, key, n);
    printf ("The key is found at the index %d\n", result);
    return 0;
}