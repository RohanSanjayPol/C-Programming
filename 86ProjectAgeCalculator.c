#include <stdio.h>
int main() {
    int birthYear, currentYear, age;
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);
    printf("Enter current year: ");
    scanf("%d", &currentYear);

    age = currentYear - birthYear;
    if(age >= 0)
        printf("Your age is %d years.", age);
    else
        printf("Invalid year entered!");
    return 0;
}
