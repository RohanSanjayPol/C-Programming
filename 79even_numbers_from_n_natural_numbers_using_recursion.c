#include<stdio.h>

int Even(int n){
    if(n==0){
        return 0;
    }
    Even(n-1);
    if(n%2==0){
        printf("%d ",n);
    }
}

void main(){
    Even(5);
}