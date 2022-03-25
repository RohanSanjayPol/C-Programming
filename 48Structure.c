// declaring structure with taking input from user
#include<stdio.h>
#include<conio.h>
//declaring an structure
struct student{
    char name[20];
    int rollNo;
    float percentage;
};
void main(){
    //initializing the structure
    struct student s1;
    printf("Enter your name\n");
    scanf(" name= %s",&s1.name);
    printf("Enter your roll no\n");
    scanf("%d",&s1.rollNo);
    printf("Enter your percentage\n");
    scanf("%f",&s1.percentage);


}