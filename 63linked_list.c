#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
};
void main(){
// declaring pointer with struct node datatype
struct node *head,*newnode,*temp;
head=0;

//dynamic memory allocation using malloc function

int i=0;
printf("Enter the 5 Elements\n");
while(i<5){
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter Element: ",i);
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0){
    head=temp=newnode;
}else{
    temp->next=newnode;
    temp=newnode;
}
i++;
}
temp=head;
while(temp!=0){
printf(" %d -> ",temp->data);
temp=temp->next;
}
printf("NULL\n");

}




