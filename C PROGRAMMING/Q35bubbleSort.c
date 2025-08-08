// Using bubble sort technique to sort the array.

#include <stdio.h>
void sort (int arr[5], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf ("The sorted array is : ");
    for (int i = 0; i < n; i++) {
        printf (" %d", arr[i]);
    }
}

int main () {
    int arr[5];
    int n = 5;
    printf ("Enter the elements of the array : ");
    for (int i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }
    sort (arr, n);
    return 0;
}
/*HOW IT WORKS : Dry run it 1st and then see this explanation, also try to write it yourself
1. Start with the first element of the array.
2. Compare the current element with the next element.
3. If the current element is greater than the next element, swap them.
4. Move to the next element and repeat the process until the end of the array is reached.
5. Purpose: Controls the number of passes through the array. After each pass, the largest
   unsorted element "bubbles up" to its correct position at the end.
6. Repeat the process for the remaining elements until the entire array is sorted.
*/