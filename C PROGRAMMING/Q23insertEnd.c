// Waf to inset element at hte last of the array.Try to write it yourself.
#include <stdio.h>

void insert(int arr[], int n, int element) {
    arr[n] = element;
    printf("Element %d inserted at the end of the array.\n", element);
    printf("Updated array: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main () {
    int arr[6] = {1, 2, 3, 4, 5}; // Make space for one more element
    int n = 5;
    int element;
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    insert(arr, n, element); // n here represents the current no of elements in the array before insertion. It basically tells where to insert the new element.
    return 0; // That is the syntax of insert.
}