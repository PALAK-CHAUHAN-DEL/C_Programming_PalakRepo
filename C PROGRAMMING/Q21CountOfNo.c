// To find the count of a given no in the array.Written it myself.
#include <stdio.h>
int main () {
    int arr[10];
    int key, count = 0;
    int n = sizeof (arr)/sizeof (arr[0]);
    printf ("Enter the elements of the array : \n");
    for (int i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }
    printf ("Enter the no. whose count is to be found : ");
    scanf ("%d", &key);
    for (int i = 0; i < n; i++) {
        if (key == arr[i]) {
            count ++;
        }
    }
    printf ("The count of %d is : %d\n", key, count);
    return 0;
}
