#include<stdio.h>

int odd(int n){
    if(n==0){
        return 0;
    }
    odd(n-1);
    if(n%2!=0){
        printf("%d",n);
    }
}

void main(){
    odd(5);
}
