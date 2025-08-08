// Waf to calculate the percentage of a student, given his marks in maths, sanskrit and science.
#include <stdio.h>
float percentage (int math, int sanskrit, int science) {
    return ((math + sanskrit + science) / 300.0) * 100;
}
int main () {
    int math, sanskrit, science;
    printf ("Enter the marks in maths : ");
    scanf ("%d", &math);
    printf ("Enter the marks in sanskrit : ");
    scanf ("%d", &sanskrit);
    printf ("Enter the marks in science : ");
    scanf ("%d", &science);
    printf ("Percentage of the student is : %.2f\n", percentage (math, sanskrit, science));
    return 0;
}