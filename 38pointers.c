#include<stdio.h>
#include<conio.h>
void main(){
    int *p,*q;
    int a=10,b=20;
    p=&a;
    q=p;
    // printing the value of a 
    printf("the value of a is %d\n",a);
    //printing the value of a using pointer p
    printf("the value of a is %d\n",*p);
    //printing the memory address of a using pointer
    printf("the memory address of a is %x\n",p);
    //printing the memory address of pointer p
    printf("the memory address of pointer p is %x\n",q);
}