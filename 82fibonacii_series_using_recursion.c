#include<stdio.h>

int fibonacci(int t0, int t1, int n){
if(n==0){
    return 0;
}
    printf("%d ",t0);
    fibonacci(t1,t0+t1, n-1);

}

void main(){
    int t0=0, t1=1, n=10;
    fibonacci(t0,t1,n);
}