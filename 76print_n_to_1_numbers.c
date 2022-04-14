// sum of n natural numbers using recursion in c

#include<stdio.h>
#include<conio.h>

int sum(int x){
    if(x==0){
        return 0;
    }
    printf("%d",x);
    sum(x-1);
}

void main(){
    int a=5;
    sum(a);
}