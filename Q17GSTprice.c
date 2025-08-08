//WAP to enter the price of 3 items and peint their final cost with 18% gst.
// i have written it myself with just a few errors of writing %d instead of %f.
#include <stdio.h>
int main () {
    float arr[3];
    int n = (sizeof arr)/ sizeof arr[0];
    for (int i = 0; i < n; i++) {
        printf ("Enter the cost of item %d : ", i + 1);
        scanf ("%f", &arr[i]); // look at the end of the code for the reason of this & here
    }
    for (int i = 0;i < n; i++) {
        float final = (arr[i] * 0.18) + arr[i];
        printf ("Final price of item %d is : %.2f\n", i+1, final);
    }
    return 0;
}

/*scanf expects an address: scanf needs to know WHERE to store the input value. It needs a memory address (pointer).

arr[i] without &: This gives you the VALUE stored at that location, not the address.*/