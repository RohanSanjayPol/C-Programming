// unary, binary, ternary operator
#include<stdio.h>
#include<conio.h>
void main(){
   //unary operator
   //unary minus
   int a=-10;
   //increment operator
   // a++,++a,a--,--a 

   //preincrement operator

   int roll_no=69;
   int prn_no=55;
   roll_no= ++prn_no;
   printf("%d\n",roll_no);

   //postincrement operator
   int x=40;
   int y=100;
   int z=x++;
   printf("%d\n",z);
   printf("%d\n",x);

   //binary operator

   printf(4+4);
}