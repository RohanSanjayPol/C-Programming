// printing a string using puts function

#include<stdio.h>
#include<conio.h>
void main(){
    char fname[20];
    printf("Enter your Name: \n");
    //taking input string using gets function
    gets(fname);
    //printing output using puts function
    puts(fname);

    //printing output using printf function
    printf("%0.7s\n",fname);
}