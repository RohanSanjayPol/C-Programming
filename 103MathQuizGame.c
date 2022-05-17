#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a,b,ans,user,score=0,i;
    srand(time(0));
    for(i=0;i<5;i++){
        a=rand()%10;
        b=rand()%10;
        ans=a+b;
        printf("Q%d: %d + %d = ",i+1,a,b);
        scanf("%d",&user);
        if(user==ans){
            printf("right!\n");
            score++;
        }else{
            printf("wrong! ans=%d\n",ans);
        }
    }
    printf("\nyour final score = %d/5",score);
    return 0;
}
