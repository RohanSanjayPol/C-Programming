// comaparing two strings using strcmp function

#include<stdio.h>
#include<conio.h>
void main(){
    char str1[5]="Rohan";
    char str2[3]="Pol";

    int value;
    value=strcmp(str1,str2);
    if(str1==0){
        printf("both strings are same");
    }else{
        printf("strings are not equal %d",value);
    }
}