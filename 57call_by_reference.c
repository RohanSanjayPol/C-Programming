// call by reference

#include<stdio.h>
#include<conio.h>
// declaring an function
void fun(int*,int*);

void main(){
    int x=5,y=7;
    fun(&x,&y);//function arguments
    printf("%d and %d\n",x,y);
}

// call by reference
void fun(int *x,int *y){// function parameters
*x=55;
*y=77;
printf("%d and %d\n",*x,*y);
}