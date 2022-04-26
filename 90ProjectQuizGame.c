#include <stdio.h>
int main(){
    int score=0;
    char ans;

    printf("Q1. capital of india?\n a) delhi\n b) mumbai\n");
    scanf(" %c",&ans);
    if(ans=='a'){
        score++;
    }

    printf("Q2. 2 + 3 = ?\n a) 4\n b) 5\n");
    scanf(" %c",&ans);
    if(ans=='b'){
        score++;
    }

    printf("your score = %d",score);
    return 0;
}
