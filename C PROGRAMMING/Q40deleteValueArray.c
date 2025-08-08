// Waf to delete the element at the given position in the given array.t at the given position in the given array.

#include <stdio.h>

int deleteAtPosition(int arr[], int n, int pos) {
    for (int i = pos; i < n; i++) {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int main() {
    int arr[] = {4, 3, 2, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos;
    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);
    n = deleteAtPosition(arr, n, pos);
    printf("The array after deletion is: ");

    printf("The size of the new array is : %d",n);
    printf("\n");

    // print array 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}   