#include <stdio.h>

int main() {
    int hours;
    int cost = 0;
    scanf("%d", &hours);

    if (hours <= 0) {
        printf("Can't la'");
    } else if (hours == 1) {
        cost = 0;
    } else if (hours >= 2 && hours <= 4) {
        cost = (hours - 1) * 20;
    } else if (hours >= 5 && hours <= 8) {
        cost = 60 + (hours - 4) * 30;
    } else {
        cost = 180 + (hours - 8) * 50;
    }
    printf("%d", cost);
    return 0;
}
