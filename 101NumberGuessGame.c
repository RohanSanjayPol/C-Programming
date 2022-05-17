#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, guess, tries=0;
    srand(time(0));
    num = rand()%50 + 1;

    printf("guess number 1 to 50\n");
    do{
        printf("enter guess: ");
        scanf("%d",&guess);
        tries++;
        if(guess>num)
            printf("too high\n");
        else if(guess<num)
            printf("too low\n");
        else
            printf("you got it in %d tries!\n",tries);
    }while(guess!=num);
    return 0;
}
