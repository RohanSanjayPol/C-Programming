// write an program to read two arrays if size 5 and store the sum of this arrays into third array

#include<stdio.h>
#include<conio.h>
void main(){
    int i,sum=0,sum1=0;
   int arr1[5]={};
   int arr2[5]={};
   printf("Enter a 5 numbers: \n");
   for(i=1;i<=5;i++){
    scanf("%d",&arr1[i]);
   }
   for(i=1;i<=5;i++){
    sum=sum+arr1[i];
   }
       printf("sum of first array: %d\n",sum);

// second array
printf("Enter again 5 numbers: ");
   for(i=1;i<=5;i++){
    scanf("%d",&arr2[i]);
   }
   for(i=1;i<=5;i++){
    sum1=sum1+arr2[i];
   }
       printf("sum of second array: %d\n",sum1);

   int total=sum+sum1;
   printf("total= %d\n",total);
}