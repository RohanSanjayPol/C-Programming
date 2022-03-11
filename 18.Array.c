// write a program to read an array of 10 integers and count total number of even and odd elements

#include<stdio.h>
#include<conio.h>
void main(){
    int i,arr[10]={};
    printf("Enter a 10 numbers: ");
    //taking input from user
    for(i=1;i<=10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=10;i++){
        if(arr[i]%2==0){
            printf(" even numbers: %d\n",arr[i]);
        }else{
            printf("odd numbers: %d",arr[i]);
        }
    }
}