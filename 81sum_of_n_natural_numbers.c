#include<stdio.h>

int sum(int n){
    int s=0;
    if(n==0){
        return n;
    }
    s=n+sum(n-1);
    return s;
    
}
void main(){
    int total;
   total= sum(5);
   printf("%d",total);
}
