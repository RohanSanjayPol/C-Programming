#include <stdio.h>
struct account{
    int accno;
    float balance;
};

void deposit(struct account *a,float amt){
    a->balance += amt;
}
void withdraw(struct account *a,float amt){
    if(amt > a->balance)
        printf("not enough balance\n");
    else
        a->balance -= amt;
}
void show(struct account a){
    printf("accno: %d, balance: %.2f\n", a.accno, a.balance);
}

int main(){
    struct account a1 = {101, 1000};
    int ch;
    float amt;

    while(1){
        printf("\n1.deposit\n2.withdraw\n3.show\n4.exit\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("enter amt: ");
            scanf("%f",&amt);
            deposit(&a1,amt);
        }
        else if(ch==2){
            printf("enter amt: ");
            scanf("%f",&amt);
            withdraw(&a1,amt);
        }
        else if(ch==3){
            show(a1);
        }
        else if(ch==4){
            break;
        }
        else{
            printf("invalid\n");
        }
    }
    return 0;
}
