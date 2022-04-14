// print 1 to n using recursion

#include<stdio.h>

int display(int n,int i){
  if(i==n){
    return 0;
  }
  printf("%d",i);
  display(n,i+1);
}

void main(){
    display(5,1);
}