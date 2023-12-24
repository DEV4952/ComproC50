#include <stdio.h>
int main() {
    int units;
    float totalCost, costPerUnit;
    scanf("%d", &units);
    if (units <= 50) {
        costPerUnit = 0.50;
    } else if (units <= 150) {
        costPerUnit = 0.75;
    } else if (units <= 250) {
        costPerUnit = 1.20;
    } else {
        costPerUnit = 1.50;
    }
    totalCost = units * costPerUnit;
    totalCost += totalCost * 0.20;
    printf("%.2f", totalCost);
    return 0;
}
