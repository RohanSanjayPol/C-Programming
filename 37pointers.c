// pointers will store the memory address of other variable

#include<stdio.h>
#include<conio.h>
void main(){
    int a=10,b=20;
    int *p,*q;
    // pointer p will store the memory address integer variable of a
    p=&a;
    //pointer q will store the memory address of integer variable of b
    q=&b;
    //printing the value of a and b.
    printf("the value of a is %d and the value of b is %d\n",a,b);
    //printing the memory address of a and b
    printf("the memory address of a is %x and for b is %x\n",&a,&b);
    //printing the value of a and b using pointers
    printf("a= %d and b= %d\n",*p,*q);
    //printing the memory address of a and b using pointers
    printf("a= %x and b=%x",p,q);
}