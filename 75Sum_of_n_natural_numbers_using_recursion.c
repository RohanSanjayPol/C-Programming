// sum of n natural numbers using recursion in c

#include<stdio.h>
#include<conio.h>

int sum(int x){
    int s=0;
    if(x==1){
        return x;
    }
    s=x+sum(x-1);
    return s;
}

int main(){
    int a=5;
    int z;
    z=sum(a);
    printf("%d",z);
    return 0;
}