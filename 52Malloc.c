//malloc function

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int i,*p,n;
    printf("Enter how many values do you want to enter:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the five values \n");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("the entered values are ");
    for(i=0;i<n;i++){
        printf("%d",(*p+i));
    }
    free(p);
}