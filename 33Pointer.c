#include<stdio.h>
#include<conio.h>
void main(){
    int a=10,b=11;
    int* p,*q;
    p=&a;
    q=p;
    printf("value of a are %d\n %d\n %d\n",a,*p,*q);
}