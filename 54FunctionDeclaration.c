// function declaration

#include<stdio.h>
#include<conio.h>
//function declaration
void sum(void);
//function calling
void main(){
    sum();
}
// function defination
void sum(){
    int a,b,sum;
    printf("Enter a two numbers: \n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("the sum of two number is: %d",sum);
}