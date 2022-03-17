// find the length of string using strlen function

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char name[20];
    printf("Enter your name: ");
    gets(name);
    int len=strlen(name);
    printf("%d",len);
}