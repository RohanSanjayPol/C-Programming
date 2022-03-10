// write a programm to read marks of 5 students and calculate sum and average using array

#include<stdio.h>
#include<conio.h>
void main(){
    int sum=0,avg,i;
    printf("Enter a five numbers: ");
    int arr[5];
    for(i=1;i<=5;i++){
    scanf("%d",&arr[i]);
    }
    for(i=1;i<=5;i++){
        sum=sum+arr[i];
    }
    avg=sum/5;
    printf("%d\n",sum);
    printf("%d\n",avg);
}