// wap to print all the eng alphabets using pointers.
// this is an unnecessary code.
#include <stdio.h>
int main () {
    char *ptr;
    char arr[] = "abcdefghijklmnopqrstuvwxyz";
    ptr = arr; // pointer points to the address of the first element of the array
    // we couldn't have used an int variable like x here for accessing elements of arr. as when we arite x = arr, x has to be a pointer only as this thing stored the addredd of 1st variable.

    for (int i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i)); // 1st value will be a as i starts from 0.
    }

    return 0;
}
/*#include <stdio.h>
int main () {
    char arr[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++) {
        printf("%c ", arr[i]);
    }
    return 0;

    This actually is the right code, in the previous one we have used a pointer just cuz the q says.
}
    */

// --------------------------------------------------------------------------------------------------------

/*
#include <stdio.h>
int main() {
    char arr[] = "abcdefghijklmnopqrstuvwxyz";
    int x = arr; // Assigns the address of arr to x (unsafe and not recommended)
    printf("Value of x: %d\n", x);
    return 0;

    OUTPUT OF THIS WOULD BE : <some integer> where this some int will be the memory address of the first element of arr, printed as an int.
    // pointer too points to the address but we have an option of dereferencing the pointer to get the value.
}
    */
