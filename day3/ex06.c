#include <stdio.h>
#include <math.h>

int main() {

    float FV, PV, i, n;
    scanf("%f\n%f\n%f", &PV, &i, &n);
    i= i/100;
    FV = PV * pow(1 + i, n);
    printf("%.2f", FV);
    return 0;
}
