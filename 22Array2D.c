#include<stdio.h>
#include<conio.h>
void main(){
    //2d array
    int i,j,arr[3][4];
    //taking input from user
    printf("Enter the elements of an array: ");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //printing the elements of an array
    printf("The elements of an array as follows:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}