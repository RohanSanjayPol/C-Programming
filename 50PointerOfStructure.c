// pointer of structure

#include<stdio.h>
#include<conio.h>
//declaring an structure
struct student{
    char name[10];
    int rollNo;
    float percentage;
};
void main(){
   struct student s={"Rohan",6,9.5};

   // declaring pointer which store memory address of structure datatype
   struct student *ptr=&s;
   printf("%s\n",s.name); 
   printf("%s\n",(*ptr).name);
   printf("%s\n",ptr->name);
}