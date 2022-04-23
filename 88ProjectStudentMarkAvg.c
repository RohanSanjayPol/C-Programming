#include <stdio.h>
int main() {
    int marks[5], i;
    float sum = 0;
    for(i = 0; i < 5; i++) {
        printf("Enter marks of subject %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    printf("Average marks = %.2f", sum / 5);
    return 0;
}
