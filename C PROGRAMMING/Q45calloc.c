// Wap to create an array of size 5 using calloc and then enter it's values from the user.
#include <stdio.h>
#include <stdlib.h>
int main () {
    int *arr;
    int n = 5;
    arr = (int *) calloc(n, sizeof(int));
    if (arr == NULL) {  // This was not really needed.
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter value for element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}