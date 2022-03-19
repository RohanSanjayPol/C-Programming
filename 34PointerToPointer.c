// pointer to pointer
#include<stdio.h>
#include<conio.h>
void main(){
int a=10,b=20;
int *p,**q;
p=&a;
q=&p;
printf("a is %d\n %d\n %d",a,*p,**q);
}