#include<stdio.h>
#include<conio.h>
void main(){
    int row_size,col_size,i,j;
    //size of an array
    printf("Enter an row size of an array: ");
    int row_size1;
    scanf("%d",&row_size1);
    printf("Enter an column size of an array: ");
    int col_size2;
    scanf("%d",&col_size2);
    //declaring an array
    int arr[row_size1][col_size2];
    //taking an input from user
    printf("Enter the Elements of an array: ");
    for(i=0;i<row_size1;i++){
       for(j=0;j<col_size2;j++){
        scanf("%d",&arr[i][j]);
       }
    }
    printf("elements of an array as follows: ");
    //printing an output
    for(i=0;i<row_size1;i++){
        for(j=0;j<col_size2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n ");
    }

}