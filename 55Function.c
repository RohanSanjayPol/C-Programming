#include<stdio.h>
#include<conio.h>
//function declaration
void sum(int ,int);//function parameter

void main(){
    // function calling
    sum(15,5);//function argument
}

//function defination
void sum(int x,int y)//function parameter
{
   int sum=x+y;
    printf("%d",sum);
}