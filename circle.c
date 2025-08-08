#include<stdio.h>

int main() {
    float radius;
    printf("Enter radius\n");
    scanf("%f", &radius);
    
    float area = radius*3.14;
    printf("Area of circle is: %f", area);
    return 0;
}