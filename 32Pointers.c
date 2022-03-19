//pointers in c

#include<stdio.h>
#include<conio.h>
void main(){
    int A=10,b=20;
    int *p=&A,*q=&b;
    printf("value of A is %d\n",A);
    printf("value of A is %d\n",*p);
    printf("address of A is %X\n",&A);
    printf("address of A is %X\n",p);
}