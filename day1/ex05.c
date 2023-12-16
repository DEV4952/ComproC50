#include <stdio.h>
int main(){
    int a = 2;
    int b = 3;
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d + %.2f = %d\n", a, (float)b, a+(float)b);
    printf("%d + %.2f = %.2f\n", a, (float)b, a+(float)b);

    int x = 5;
    float y = 10;
    printf("%d + %d = %d\n", x, y, x+y);
    printf("%d + %.2f = %d\n", x, y, x+y);
    printf("%d + %.2f = %.2f\n", x, y, x+y);
}
