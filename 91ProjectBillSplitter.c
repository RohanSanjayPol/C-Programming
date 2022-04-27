#include <stdio.h>
int main(){
    float total;
    int people;
    printf("enter total amount: ");
    scanf("%f",&total);
    printf("enter number of people: ");
    scanf("%d",&people);

    if(people<=0){
        printf("invalid number of people");
    }else{
        printf("each person pay = %.2f", total/people);
    }
    return 0;
}
