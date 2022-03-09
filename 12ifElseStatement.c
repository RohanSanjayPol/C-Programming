// if else statement

#include<stdio.h>
#include<conio.h>
void main(){
    float percentage;
    printf("Enter a percentage: ");
    scanf("%d",&percentage);
    if(percentage>=75){
        printf("first class");
    }else if(percentage>=65){
        printf("second class");
    }else if(percentage>=35){
        prinf("third class");
    }else{
        printf("fail");
    }
}