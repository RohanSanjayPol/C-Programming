// null pointer does not referes to any valid memory address speciall when in dynamic memory

#include<stdio.h>
#include<conio.h>
void main(){
    int *p;
    p==NULL;

    printf("%d",*p);
}