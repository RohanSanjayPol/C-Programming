// typedef function it is alias 
#include<stdio.h>
#include<conio.h>
//declaring an structure
// declaring typedef function
typedef struct student{
    char name[20];
    int rollNo;
    float percentage;
}student;// this is an alias
void main(){
    student s={"Rohan",6,9.3};
}