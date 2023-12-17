#include <stdio.h>

void main()
{
    char bro[] = "Merry Christmas";
    printf(bro);
    putchar('\n');
    int i, j;
    int n=4;
    int b=2;

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= b; i++)
    {
        for (j = 1; j <= b; j++)
        {
            printf(" ");
        }
        printf("|||\n");
    }
}

