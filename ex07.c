#include <stdio.h>

int main() {
    int bro[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int a;
    scanf("%d", &a);
    if (a >= 1 && a <= 12) {
        printf("%d", bro[a - 1]);
    } else {
        printf("Error");
    }

    return 0;
}
