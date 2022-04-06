// deleting element from any position

#include<stdio.h>
#include<conio.h>
//declaring an structure
struct node{
    int data;
    struct node *next;
};

void main(){
//declaring an pointer 
struct node *head,*newnode,*temp,*nextnode;
printf("Enter a 5 elements in the linked list: \n");
int i=0;
head=0;
while(i<5){
    // allocating a dynamic memory using malloc function
    newnode=(struct node*)malloc(sizeof(struct node));
    printf(" Enter a value: ");
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
// printing an elements
temp=head;
while(temp!=0){
    printf("%d-> ",temp->data);
    temp=temp->next;
}
printf("NULL\n");

// deleting element from any position
int pos;
int j=1;
printf("Enter a position to delete an element: \n");
scanf("%d",&pos);
if(pos>5){
    printf("Invalid position\n");
}else{
    temp=head;
    while(j<pos){
        temp=temp->next;
        j++;
    }
    //logic for deleting element
    nextnode=temp->next->next;
    free(temp->next);
    temp->next=nextnode;

    //printing an elements
    temp=head;
    printf("Linked list after deletion operation\n");
    while(temp!=0){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
}