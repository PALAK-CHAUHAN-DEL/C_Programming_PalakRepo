// waf to convert Celsius to Fahrenheit
#include <stdio.h>
float CeToFah (float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
int main () {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Temperature in Fahrenheit: %f\n", CeToFah(celsius));
    return 0;
}