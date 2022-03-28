// sum of two numbers function

#include<stdio.h>
#include<conio.h>
// function defination
void sum(){
    int a,b,sum;
    printf("Enter a first number: \n");
    scanf("%d",&a);
    printf("Enter a second number\n");
    scanf("%d",&b);
    sum=a+b;
    printf("the sum of two number is: %d",sum);

}
void main(){
// calling an function
sum();
}