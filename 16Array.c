//write an program an array of 10 integers and count total number of odd and even numbers

#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    int arr[10];
    printf("Enter a 10 numbers: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            printf("%d\n",arr[i]);
        }
    }
}