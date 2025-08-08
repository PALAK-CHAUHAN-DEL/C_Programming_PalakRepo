// To calculate the sum of all no ntw 5 and 50, including 5 and 50.
#include <stdio.h>
int main () {
    int sum = 0;
    for (int i = 5; i <= 50; i++) {
        sum += i;
    }
    printf ("The sum of numbers is : %d\n", sum);
    return 0;
}