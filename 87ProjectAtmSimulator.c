#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;

    while(1) {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: printf("Balance = %.2f\n", balance); break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient balance!\n");
                break;
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
