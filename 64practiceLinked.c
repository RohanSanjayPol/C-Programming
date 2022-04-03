#include<stdio.h>
#include<conio.h>
// declaring structure
struct node{
    int data;
    struct node * next;
};
// main method
void main(){
    // declaring pointers 
    struct node *head,*newnode,*temp;
    head=0;
    int i=0;
    printf("Enter a five Elements:\n");
    while(i<5){
    //allocating memory address
    newnode=(struct node*)malloc(sizeof(struct node));
    //taking input from user
    scanf("%d",&newnode->data);
    newnode->next=0;
    //check condition
    if(head==0){
        head=temp=newnode;
    }else{
        temp->next=newnode;
        temp=newnode;
    }
    i++;
    }
    temp=head;
    
    while(temp->next!=0){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}