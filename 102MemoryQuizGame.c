#include <stdio.h>
int main(){
    int score=0;
    char ans;

    printf("Q1. Capital of India?\n a) Delhi\n b) Mumbai\n");
    scanf(" %c",&ans);
    if(ans=='a') score++;

    printf("Q2. 5 * 3 = ?\n a) 15\n b) 10\n");
    scanf(" %c",&ans);
    if(ans=='a') score++;

    printf("Q3. Sun rises from?\n a) West\n b) East\n");
    scanf(" %c",&ans);
    if(ans=='b') score++;

    printf("\nyour score = %d/3", score);
    return 0;
}
