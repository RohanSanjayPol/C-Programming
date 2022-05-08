#include <stdio.h>
int main(){
    int i, j, n1, n2, flag;
    printf("enter range: ");
    scanf("%d %d", &n1, &n2);
    printf("prime numbers: ");
    for(i=n1;i<=n2;i++){
        flag=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0 && i>1)
            printf("%d ",i);
    }
    return 0;
}
