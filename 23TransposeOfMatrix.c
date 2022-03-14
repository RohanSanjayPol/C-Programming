// transpose of matrix
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,arr[3][2];
    //taking input from user
    printf("Enter the Elements of an array: ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //printing the elements of an array
    printf("Elements of an array as follows: ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}