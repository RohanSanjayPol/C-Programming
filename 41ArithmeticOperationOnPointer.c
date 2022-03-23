// substraction in pointer 

#include<stdio.h>
#include<conio.h>
void main(){
    int *p,*q;
    int a[5]={1,2,3,4,5};
    int b[10]={11,22,33,44,55};
    p=&a[4];
    q=&a[0];
    int sub=p-q;
    printf("%d",sub);
}