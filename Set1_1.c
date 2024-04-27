#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;          // Data
    struct node *next; // Address
};
struct node *head;
void createList(int n);
void insertNodeAtGivenPosition();
void displayList();

void main()
{
    int n, data;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("\nData in the list \n");
    displayList();
    insertNodeAtGivenPosition();
    printf("\nData in the list \n");
    displayList();
} void createList(int n)
{
    struct node *newNode, *temp;
    int i;
    head = 0;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of node 1: ");
    scanf("%d", &newNode->data);
    newNode->next = 0;
    if (head == 0)
    {
        head = temp = newNode;
    }
    else
    {
        temp->next = newNode;
        temp = newNode;
    }
    // Create n nodes and adds to linked list
    for (i = 1; i < n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of node %d: ", i);
        scanf("%d", &newNode->data);
        newNode->next = 0;    // Link address field of newNode with NULL
        temp->next = newNode; // Link temp to the newNode
        temp = newNode;
    }
    printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
}
void insertNodeAtGivenPosition()
{
    int data, pos, i;

    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the position of a node at which you want to insert a new node: ");
    scanf("%d", &pos);
    printf("enter data to insert at the Nth Position:");
    scanf("%d", &newnode->data);
    temp = head;
    for (i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    printf("DATA INSERTED SUCCESSFULLY\n");
}
void displayList()
{
    struct node *temp;
    temp = head;
    printf("Head Address = %p\n", head);
    while (temp != NULL)
    {
        printf("Data at %p= %d |\t Next = %p\n", temp, temp->data, temp->next);
            temp = temp->next;
    }
}