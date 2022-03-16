// taking string input using gets function
#include<stdio.h>
#include<conio.h>
void main(){
    printf("Enter your name: \n");
    char fName[10];
    gets(fName);
    printf("your name is printed using gets function\n");
    printf("%s",fName);
}