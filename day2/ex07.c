#include<stdio.h>
#include<string.h>
int main(){
    char first_name[100], last_name[100], country[100];
    int age;
    printf("Enter Your First Name: ");
    gets(first_name);
    printf("Enter Your Last Name: ");
    gets(last_name);
    printf("Enter Your age: ");
    scanf("%d", &age);
    printf("Enter Your Country: ");
    scanf("%s", country);
    printf("My name is %s %s from %s and I'm %d years old.\n", first_name, last_name, country, age);
}
