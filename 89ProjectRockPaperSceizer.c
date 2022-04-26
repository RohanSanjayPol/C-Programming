#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int user, comp;
    srand(time(0));
    comp = rand() % 3;  // 0 rock, 1 paper, 2 scissor

    printf("0=rock, 1=paper, 2=scissor\n");
    printf("enter your choice: ");
    scanf("%d",&user);

    printf("computer choice: %d\n", comp);

    if(user==comp){
        printf("draw game");
    }
    else if((user==0 && comp==2) || (user==1 && comp==0) || (user==2 && comp==1)){
        printf("you win!");
    }
    else{
        printf("you lose!");
    }
    return 0;
}
