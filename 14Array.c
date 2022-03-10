#include<stdio.h>
#include<conio.h>

int main(){
    int a[5];
    int i;

    printf("Enter 5 numbers: ");
    
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    
    printf("Output is: ");
    
    for(i=0; i<5; i++){
        printf("%d ", a[i]);
    }
    return 0;
    getch();
}

