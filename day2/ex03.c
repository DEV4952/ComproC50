#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100] ;
    char str2[100] ="";

    putchar('\n');
    strcpy(str1,"Can you see?");
    printf("strt =");
    printf("%s", str1);

    putchar('\n');
    strcpy(str2, "Yes, I can C");
    printf("str2 = ");
    printf("%s", str2);
    putchar('\n');
}
