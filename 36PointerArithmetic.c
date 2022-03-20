// arithmetic operation on pointer on array

#include<stdio.h>
#include<conio.h>
void main(){
    int arr[5]={1,2,3,4,5};
    int *p;
    p=&arr[0];
    p=p+2;
    printf("%d",*p);
}