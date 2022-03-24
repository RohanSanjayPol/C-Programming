#include <stdio.h>
#include<conio.h>

struct student
{
int roll_no;
float percentage;
char name[10];
}s={6,9.4,"rohan"};


void main(){
printf("%s",s.name);
printf("%d",s.roll_no);
printf("%f",s.percentage);
}