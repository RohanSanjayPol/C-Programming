// increment decrement pointer 

#include<stdio.h>
#include<conio.h>
void main(){
    int i, *p,*q;
    int a[5]={1,2,3,4,5},b[5]={11,22,33,44,55};
    for(i=0;i<5;i++){
        p=&b[i];
        printf("%x\n",p);
    }
}