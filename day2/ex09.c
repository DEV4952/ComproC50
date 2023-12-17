#include<stdio.h>

int main() {
    float F, C;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);

    F = C * 9 / 5.00 + 32;

    printf("Temperature in Fahrenheit: %f\n", F);

    return 0;
}
