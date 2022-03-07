// datatypes in c

#include<stdio.h>
#include<conio.h>
void main(){
    int a=123456789;
    printf("%d\n",sizeof(a));
    printf("%d\n",a);

    long int b=123456789;
    printf("%d\n",b); 

    //character data types
    char x='a';
    printf("%c\n",x);

    // float takes 4 bytes
    // double takes 8 bytes
    // long double takes 10 bytes

    int ab=65536;
    printf("%d",ab);
}