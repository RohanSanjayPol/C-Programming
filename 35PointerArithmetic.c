// arithmetic operation on pointer

#include<stdio.h>
#include<conio.h>
void main(){
    int a=20,b=40;
    int *p,*q;
    p=&a;
    p=p+2;
    printf("%d",*p);
}