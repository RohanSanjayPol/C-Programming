// call by value

#include<stdio.h>
#include<conio.h>
//fucntion declaration
void fun(int ,int);//passing function parameters

void main(){
    //function calling
    int x=5,y=7;
    fun(x,y);// passing an argument
    printf("%d and %d\n",x,y);// call by value
}

//function defination
void fun(int x,int y){
     x=55;
     y=77;
    printf("%d and %d\n",x,y);
}