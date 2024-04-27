
#include <stdio.h>
#include <stdlib.h>

int top = -1;
int stack[5];

void push()
{

    int x;
    printf("Enter the data you want to enter: ");
    scanf("%d", &x);

    if (top == 4)
    {
        printf("Stack Overflow");
    }
    else
    {
        top += 1;
        stack[top] = x;
    }
}

void pop()
{

    int item;
    if (top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        item = stack[top];
        top--;
        printf("Deleted item is %d\n", item);
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("The items in stack are: %d\n", stack[i]);
    }
}

void main()
{
    int ch;
    do
    {
        printf("enter choice no. 1 - Push, 2 - Pop, 3 - Display : \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Invalid Choice \n");
        }
    } while (ch != 0);
}