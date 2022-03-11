//write a program to read a mark of 5 students and calculate sum and avg using arrays

#include<stdio.h>
#include<conio.h>
void main(){
int sum=0,avg,i,arr[5]={};
printf("Enter a 5 subject marks: ");
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
printf("the sum of total number: %d\n",sum);
avg=sum/5;
printf("the avg is: %d",avg);
}
