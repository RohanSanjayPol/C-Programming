// array of structure
#include<stdio.h>
#include<conio.h>
//declaring an structure
struct student{
    char name[10];
    int rollNo;
    float percentage;
};
void main(){
    int i;
    struct student s[3];
    printf("Enter the name,roll no and percentage of three students");
    for( i=0;i<3;i++){
        scanf("%s %d %f",&s[i].name,&s[i].rollNo,&s[i].percentage);
    }

    for(i=0;i<3;i++){
        printf("%s %d %f",s[i].name,s[i].rollNo,s[i].percentage);
    }
}