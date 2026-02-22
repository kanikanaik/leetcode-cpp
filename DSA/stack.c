/*******************************************
Statement - Stack implementation
Programmer - Kanika Naik
Written For - http://developerinsider.in
********************************************/

#include <stdio.h>
#include <conio.h>
#define SIZE 10

int stack[SIZE];
int top = -1;

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Top element is %d\n", stack[top]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        int i;
        printf("Stack Elements:  ");
        for (i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}
void push()
{
    int value;
    if (top == SIZE - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;

        stack[top] = value;
        printf("%d pushed to the stack\n", value);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n---Stack Menu---\n");
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting...");
            break;
        }
    } while (choice != 5);
    getch();
    return 0;
}