#include<stdio.h>
int main(){
    int a;
    long long int b;
    float c;
    double d;
    char e;

    printf("int: ");
    scanf("%d",&a);

    printf("long long int: ");
    scanf("%lld",&b);

    printf("float: ");
    scanf("%f",&c);

    printf("double: ");
    scanf("%lf",&d);

    printf("char: ");
    scanf(" %c", &e);

    printf("int: %d",a);
    printf("\n");
    printf("long long int: %lld",b);
    printf("\n");
    printf("float: %f",c);
    printf("\n");
    printf("double: %lf",d);
    printf("\n");
    printf("char : %c",e);


}
