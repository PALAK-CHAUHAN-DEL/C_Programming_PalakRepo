// Calculate sum using recursion.
// watch c tutorial of shraddha for explanation (4:51)
// in this we basically calculate the sum till n-1 and then add n to it, and call the function again and again to get the cvalue of n-1.
#include <stdio.h>

int sum (int n) {
    if (n == 1) {
        return 1; // this is the base case where we assign the value of sum for the least value i.e 1.
    }
    return sum (n - 1) + n; // this is the simplest version of the code ever possible.
}
int main () {
    int n;
    printf ("Enter the value of n : ");
    scanf ("%d", &n);
    printf ("sum is : %d\n", sum (n));
    return 0;
}

/*Here’s a step-by-step explanation of how your recursive sum code works:

1. User Input
The program asks:
Enter the value of n :
You enter a number, say 5.
2. Function Call
printf ("sum is : %d\n", sum(n)); calls sum(5).
3. Recursive Function Execution
The function sum(n) calculates the sum from 1 to n recursively.
Step-by-step for n = 5:
sum(5):

n is not 1, so it calls sum(4)
Will return sum(4) + 5
sum(4):

Calls sum(3)
Will return sum(3) + 4
sum(3):

Calls sum(2)
Will return sum(2) + 3
sum(2):

Calls sum(1)
Will return sum(1) + 2
sum(1):

n == 1, so returns 1 (base case)
4. Returning Values Up the Stack
Now, each function returns to its caller:
sum(2) returns sum(1) + 2 = 1 + 2 = 3
sum(3) returns sum(2) + 3 = 3 + 3 = 6
sum(4) returns sum(3) + 4 = 6 + 4 = 10
sum(5) returns sum(4) + 5 = 10 + 5 = 15
5. Final Output
The main function prints:
sum is : 15
Summary:
The recursion breaks the problem into smaller pieces until it reaches the
base case (n == 1), then adds up all the results as it returns from each function call.*/