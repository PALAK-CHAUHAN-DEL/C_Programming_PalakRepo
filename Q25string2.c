// Waf to input the first name of user and print the length of it.
#include <stdio.h>
int countLength (char arr[]) {  // no need to pass n (length) as the argument \0 will anyways terminate the string.
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        count ++;
    }
    return count - 1; // Check the end of the code for explanation.
}
int main () {
    char arr[100];
    printf ("Enter your first name : ");

    fgets (arr, 100, stdin); // using fgets to read the string

    printf ("The name u have entered is : ");

    puts (arr);  // This automatically adds a newline after printing the string.

    int length = countLength(arr);

    printf ("The length of your first name is : %d\n", length);
    return 0;
}

/*The reason you see count returning one extra length is because when you use fgets, 
it reads the newline character (\n) when you press Enter, and includes it in the string
 (unless the input exactly fills the buffer). So, your string actually contains the newline
  before the null terminator, making the length appear one more than expected.

Subtracting 1 (count - 1) removes this newline from the count, giving you the length of the
 name without the newline. This is why your code works as you expect.*/