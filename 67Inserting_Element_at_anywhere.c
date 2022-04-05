// inserting element at anywhere position in the list
#include<stdio.h>
#include<conio.h>
//declaring structure
struct node{
    int data;
    struct node *next;
};
void main(){
// declaring pointers of struct node data type
struct node *head,*newnode,*temp;
head=0;
printf("Enter how many Elements do you want to Enter: \n");
int size,i=0;
scanf("%d",&size);
while(i<size){
//allocating a dynamic memory
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the Element: ");
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
    printf("%d ->",temp->data);
    temp=temp->next;
}
printf("NULL\n");

// in which position do you want to insert an element
int pos;
int j=1;
printf("In which position do you want to Insert an element: \n");
scanf("%d",&pos);
if(pos>size){
printf("opps !Invalid Position");
}else{
temp=head;
while(j<pos){
    temp=temp->next;
    j++;
}
printf("Enter the element: \n");
newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->next=temp->next;
temp->next=newnode;

//printing an elements
temp=head;
while(temp!=0){
    printf("%d ->",temp->data);
    temp=temp->next;
}
}
}