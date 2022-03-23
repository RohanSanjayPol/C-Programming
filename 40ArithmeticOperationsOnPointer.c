// arithmetic operations on pointer

#include<stdio.h>
#include<conio.h>
void main(){
    int arr[5]={1,2,3,4,5};
    //pointer p will store the memory address of integer array of a[0] element
    int *p=&arr[0];
    //printing the arr[0] element
    printf("%d\n",*p);
    //printing the memory address of arr[0] index
    printf("%x\n",p);
    //performing arithmetic operations on pointer p
    p=p+2;
    //printing the value after performing an operation
    printf("%d\n",*p);
    //printing the memory address of arr after performing an operation
    printf("%x\n",p);


}