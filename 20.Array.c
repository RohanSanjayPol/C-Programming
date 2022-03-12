// write a program of size 5 and store sum of array into 3 rd array

#include<stdio.h>
#include<conio.h>
void main(){
    int i,arr1[5],arr2[5],sum[5];
    //first array 
    printf("Enter a 5 Elements into an array: ");
    for(i=1;i<=5;i++){
        scanf("%d",&arr1[i]);
    }
    //second array
    printf("Enter a another 5 Elements into an array: ");
    for(i=1;i<=5;i++){
        scanf("%d",&arr2[i]);
    }
    //third array
    for(i=1;i<=5;i++){
        sum[i]=arr1[i]+arr2[i];
    }
    //print sum of array
    printf("The sum of an array is: ");
    for(i=1;i<=5;i++){
        printf("%d\n",sum[i]);
    }
}