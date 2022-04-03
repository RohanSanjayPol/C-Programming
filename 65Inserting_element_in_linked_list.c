// inserting element in linked list at first position

// creating linked list
#include <stdio.h>
#include <conio.h>
// declaring a structure
struct node
{
    int data;
    struct node *next;
};
void main()
{
    // creating pointers of struct data type
    struct node *head, *newnode, *temp;
    // assining head=0;
    head = 0;
    printf("Enter 5 Elements in the Linked List: \n");
    int i = 0;
    while (i < 5)
    {
        // allocating memory address dynamically using malloc function
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter a Element :");
        // Inserting elements in allocated memory
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        i++;
    }

    // printing an elements of linked list
    temp = head;
    while (temp != 0)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    //  inserting Element at first position

    printf("Inserting Element at first position \n");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter a Element:  ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;

    // printing an elements of linked list
    temp = head;
    while (temp != 0)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}