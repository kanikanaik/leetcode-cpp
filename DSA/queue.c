#include <stdio.h>
#include <conio.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

void display()
{
    if (rear == -1 || front > rear)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Elements of Queue are: ");
        int i;
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void enqueue()
{
    int value;
    if (rear == size - 1)
    {
        printf("Queueu is full");
    }
    else
    {
        printf("Enter value to enqueu: ");
        scanf("%d", &value);
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("%d pushed to the queue", value);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Dequeue element: %d", queue[front]);
        front++;
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n --- Queue Menu ---\n");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...");
            break;
        }
    } while (choice != 4);
    getch();
    return 0;
}