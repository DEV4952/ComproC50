#include <stdio.h>

int main() {
    int a, b, result;
    char operator;
    scanf("%d%c%d", &a, operator, &b);

    if (operator == '+') {
        result = a + b;
    } else if (operator == '-') {
        result = a - b;
    } else if (operator == 'x') {
        result = a * b;
    } else if (operator == '/') {
        if (b != 0) {
            result = a / b;
        } else {
            printf("ERROR");
            return 0;
        }
    } else {
        printf("ERROR");
        return 0;
    }

    printf("%d", result);

    return 0;
}

