// To  print fibonacci series using a loop. Try to write it yourself. This works perfectly fine.
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}