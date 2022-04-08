// delete repeated element from linked list

#include<stdio.h>
#include<conio.h>
// declaring a structre
struct node{
    int data;
    struct node *next;
};

void main(){
//creating an pointers
struct node *head,*newnode,*temp;
int size,i=0;
head=0;
printf("Enter how many Elements do you want to insert: \n");
scanf("%d",&size);
while(i<size){
    printf("Enter a value: ");
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
 //printing an element 
    temp=head;
    while(temp!=0){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

    // deleting an element
    int delElem;
    printf("Enter Element do you want to delete\n");
    scanf("%d",&delElem);
    
    temp=head;
    while(temp!=0){
    if(delElem==temp->data){
     free(temp);
    }else{
        
    }
    temp=temp->next;
    }

     //printing an elements after deleting 
    temp=head;
    while(temp!=0){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");

}