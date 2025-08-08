// Function to insert a value at a given position in the array.

#include <stdio.h>

int insertAtPosition(int arr[], int n, int pos, int value) {
    // Shift elements to the right to make space
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    return n + 1;
}

int main() {
    int arr[100] = {4, 3, 2, 1, 5}; // Extra space for insertion
    int n = 5;
    int pos, value;
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    n = insertAtPosition(arr, n, pos, value);

    printf("The array after insertion is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nThe size of the new array is: %d\n", n);
    return 0;
}