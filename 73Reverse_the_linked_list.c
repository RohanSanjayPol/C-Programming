// reverse the linked list

#include<stdio.h>
#include<conio.h>
//declaring an structure
struct node{
    int data;
    struct node *next;
};

void main(){
    // declaring pointers
    struct node *head,*temp,*newnode,*nextnode,*prevnode;
    head=0;
    int size;
    printf("how many Elements do you want to Insert: \n");
    scanf("%d",&size);
    int i=0;
    while(i<size){
        printf("Enter a value:");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==0){
            head=temp=newnode;
        }else{
            temp->next=newnode;
            temp=temp->next;
        }
        i++;
    }

    //printing an elements
    temp=head;
    while(temp!=0){
        printf("%d-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");

    // reversing the linked list
    temp=head;
   while(temp!=0){
    if(head==0){
   nextnode=temp->next;
   prevnode=temp->next=0;
   temp=nextnode;
    }
   }
}