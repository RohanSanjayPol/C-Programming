// finding length of linked list

#include<stdio.h>
#include<conio.h>
//declaring a structure
struct node{
    int data;
    struct node *next;
};

void main(){
    // declaring an pointers
    int size,i=0; 
    struct node *head,*newnode,*temp;
    head=0;
    printf("Enter how many Elements do you want to Insert: \n");
    scanf("%d",&size);
    while(i<size){
        // allocating memory dynamically using malloc function
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter a Elements: ");
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
    int count=0;
    while(temp!=0){
        printf("%d-> ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("NULL\n");
    printf("the length of linked list is: %d",count);
    
}