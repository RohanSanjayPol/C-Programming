// structure in c
#include<stdio.h>
#include<conio.h>
struct  student
{
    int roll_no;
    float percentage;
    char name[20];
};



void main(){
struct student s={6,9.4,"Rohan"};
printf("name is %s\n",s.name);
printf("roll no is %d\n",s.roll_no);
printf("percentage is %f\n",s.percentage);


}