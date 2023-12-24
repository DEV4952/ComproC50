#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    int fulla = a * 60 + b;
    int fullb = c * 60 + d;
    if (fullb < fulla) {
        fullb += 24 * 60;
    }
    int alltime = fullb - fulla;
    printf("%d\n", alltime);
    return 0;
}
