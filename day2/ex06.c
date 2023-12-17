#include<stdio.h>
#include<string.h>
int main(){
    char word[100],hello[100];
    gets(word);
    gets(hello);
    strcat(word,hello);
    puts(word);
}
