// structure in c programming

#include<stdio.h>
#include<conio.h>
//declaring structure
//structure is user defined datatype that is derived from primitive datatype like int,float,char 

struct student{
    char name[5];
    int rollNo;
    float percentage;
};
void main(){
struct student s1={"rohan",6,93.4};
struct student s2={"bablu",29,94.5};

printf("name=%s\n roll No=%d\n percentage=%f",s1.name,s1.rollNo,s1.percentage);

}