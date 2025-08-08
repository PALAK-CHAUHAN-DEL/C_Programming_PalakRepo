/*A program to print the sum of 1st n natural no. and print those no. in
reverse order also*/
// I couldnt write it myself for the 1st time!
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum += i;} // make sure that there is no space btw + and = to sign!
    printf("the sum of numbers is: %d\n", sum); // sum+ = i is wrong...sum +=i and sum+= i are correct!
          // if we dont write \n in the above print line, then see the output yourself!!!!
    // for loop to print numbers in reverse order!
    for ( int i = n; i>=1; i--) {
        printf("%d\n",i);
    }
    return 0;
}