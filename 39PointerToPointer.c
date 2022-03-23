//pointer to pointer
#include<stdio.h>
#include<conio.h>
void main(){
    int a=10,b=20;
    int *p;
    p=&a;
    //pointer q will store the memory address of integer pointer p
    int **q=&p;
    printf("the value of a is %d\n",*p);
    printf("the memory address of a is %x\n",p);
    printf("the value of pointer p is %d\n",*q);
    printf("the memory address of pointer p is %x\n",q);
    //pointer to pointer
    printf("pointer to pointer value is %d\n",**q);

}