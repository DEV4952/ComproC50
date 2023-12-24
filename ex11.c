#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a >= 0 && a <= 1) {
        printf("Infant");
    } else if (a >= 2 && a <= 4) {
        printf("Toddler");
    } else if (a >= 5 && a <= 12) {
        printf("Child");
    } else if (a >= 13 && a <= 19) {
        printf("Teen");
    } else if (a >= 20 && a <= 39) {
        printf("Adult");
    } else if (a >= 40 && a <= 59) {
        printf("Middle Age");
    } else {
        printf("Senior");
    }

    return 0;
}
