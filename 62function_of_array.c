// function for an array

#include<stdio.h>
#include<conio.h>

//function declaration
int avg(int[],int);

// main function
void main(){
    int marks[5];
    int i;
    printf("Enter a Marks: ");
    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
   int average= avg(marks,5);
   printf("average of marks is: %d",average);
}

//function declaration
int avg(int x[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
    sum=x[i]+sum;
    }
    int mean;
   return mean=sum/size;
}