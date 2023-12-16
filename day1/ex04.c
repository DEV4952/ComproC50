#include <stdio.h>
int main(){
    int a = 10;
    int b = 3;
    printf("%d %f\n", 10, 4);
    printf("%d %f\n\n", 10.0, 4.0);

    printf("10/4 = %d\n", 10/4);
    printf("10/4 = %f\n\n", 10/4);

    printf("10/4.0 = %d\n", 10/4.0);
    printf("10/4.0 = %f\n\n", 10/4.0);

    printf("10.0/4 = %d\n", 10.0/4);
    printf("10.0/4 = %f\n\n", 10.0/4);

    printf("10.0/4.0 = %d\n", 10.0/4.0);
    printf("10.0/4.0 = %f\n\n", 10.0/4.0);

    printf("a = %d, b = %d\n", a, b);
    printf("a = %f, b = %f\n\n", a, b);

    printf("%d/%d = %d\n", a, b, a/b);
    printf("%.2/%.2f = %.2f\n\n", a, b, a/b);

    printf("%d/%d = %.2f\n", a, b, a/b);
    printf("%d/%d = %.2f\n\n", a, b, (float)a/b);

    printf("%d/%d = %.2f\n", a, b, a/(float)b);
    printf("%d/%d = %.2f\n", a, b , (float)(a/b));
}
