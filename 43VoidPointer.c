// void pointer store the memory address of whatever data type of variable

#include<stdio.h>
#include<conio.h>
void main(){
    int a=10;
    float b=11.1;
    char c='r';
    // declaration of void pointer

    void *p,*q,*r;
    p=&a,q=&b,r=&c;
    // printing the value of a which requires the type casting
    printf("%d\n",*(int*)p);
    printf("%f\n",*(float*)q);
    printf("%c",*(char*)r);

}
