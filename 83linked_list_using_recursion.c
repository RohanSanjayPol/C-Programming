// linked list using recursion

#include<stdio.h>
#include<conio.h>

struct node{
    int data;
    struct node *next;
};

// declaring function
struct node *creationOfNode(struct node *head,struct node *temp,struct node *next, int n){
    struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter a value");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0){
    head=temp=newnode;
}else{
temp->next=newnode;
temp=temp->next;
}

}

// main function
void main(){
    struct node *head,*temp,*next;
    head=0;
    int n=5;
    creationOfNode()
}