#include <stdio.h>
#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

// Check if full
int isFull()
{
    return (front == (rear + 1) % MAX);
}

// Check if empty
int isEmpty()
{
    return (front == -1);
}

// Insert at front
void insertFront(int x)
{
    if(isFull())
    {
        printf("Deque is full\n");
        return;
    }

    if(isEmpty())
        front = rear = 0;
    else
        front = (front - 1 + MAX) % MAX;

    deque[front] = x;
}

// Insert at rear
void insertRear(int x)
{
    if(isFull())
    {
        printf("Deque is full\n");
        return;
    }

    if(isEmpty())
        front = rear = 0;
    else
        rear = (rear + 1) % MAX;

    deque[rear] = x;
}

// Delete from front
void deleteFront()
{
    if(isEmpty())
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted: %d\n", deque[front]);

    if(front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}

// Delete from rear
void deleteRear()
{
    if(isEmpty())
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted: %d\n", deque[rear]);

    if(front == rear)
        front = rear = -1;
    else
        rear = (rear - 1 + MAX) % MAX;
}

// Display deque
void display()
{
    if(isEmpty())
    {
        printf("Deque is empty\n");
        return;
    }

    int i = front;
    printf("Deque elements: ");

    while(1)
    {
        printf("%d ", deque[i]);
        if(i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

// Main
int main()
{
    insertRear(10);
    insertRear(20);
    insertFront(5);
    insertRear(30);
    display();

    deleteFront();
    deleteRear();
    display();

    return 0;
}
