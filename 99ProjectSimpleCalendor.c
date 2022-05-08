#include <stdio.h>
int main(){
    int days, start, i;
    printf("enter number of days in month: ");
    scanf("%d", &days);
    printf("enter starting day (1=Mon..7=Sun): ");
    scanf("%d", &start);

    printf("\nMon Tue Wed Thu Fri Sat Sun\n");
    for(i=1; i<start; i++){
        printf("    ");
    }
    for(i=1; i<=days; i++){
        printf("%3d ", i);
        if((i+start-1)%7==0)
            printf("\n");
    }
    return 0;
}
