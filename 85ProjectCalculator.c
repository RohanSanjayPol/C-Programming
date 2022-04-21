#include <stdio.h>
int main() {
    float a, b;
    char op;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &b);

    switch(op) {
        case '+': printf("Result = %.2f", a + b); break;
        case '-': printf("Result = %.2f", a - b); break;
        case '*': printf("Result = %.2f", a * b); break;
        case '/': 
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Cannot divide by zero!");
            break;
        default: printf("Invalid operator");
    }
    return 0;
}
