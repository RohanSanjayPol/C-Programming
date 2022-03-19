//string concatination using our own logic

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str1[30]="Rohan";
    char str2[5]="Pol";
    int i;
    int lenght1=strlen(str1);
    int lenght2=strlen(str2);
    for(i=0;i<lenght2;i++){
        str1[lenght1+i]=str2[i];
    }
    puts(str1);
}