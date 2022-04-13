#include<stdio.h>

int display(int n){
    
    if(n==0){
        return 0;
    }
    display(n-1);
    printf("%d",n);

}
    
   

    void main(){
        display(5);
    }