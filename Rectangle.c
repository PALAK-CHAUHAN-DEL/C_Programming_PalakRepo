#include<stdio.h>

int main () {
    int length, breath;
    printf("Enter length \n");
    scanf("%d", &length);
    
    printf("Enter breath \n");
    scanf("%d", &breath);

    printf("Perimeter of rectangle is: %d", 2*length+2*breath);
    return 0;
}