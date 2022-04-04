// inserting element at last

#include <stdio.h>
#include <conio.h>
// declaring an structure
struct node
{
    int data;
    struct node *next;
};
void main()
{
    // declaring an pointer
    struct node *head, *temp, *newnode;
    head = 0;
    int i = 0;
    printf("Enter a 5 Elements in linked list: \n");
    while (i < 5)
    {
        // allocating dynamically memory address
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter a Element: ");
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
    // printing an element
    temp = head;
    while (temp != 0)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }

    // inserting Element at last position
    printf("Insert Element at last position: \n");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter a element: ");
    // taking an input
    scanf("%d", &(newnode->data));
    temp->next = newnode;
    newnode->next = 0;

    // printing an elements
    temp = head;
    while (temp != 0)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
}