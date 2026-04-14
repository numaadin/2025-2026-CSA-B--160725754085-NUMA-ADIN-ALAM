#include <stdio.h>
#define MAX 5

// Queue ADT
struct queue
{
    int data[MAX];
    int front, rear;
};

struct queue q;

// Initialize queue
void init()
{
    q.front = -1;
    q.rear = -1;
}

// Enqueue operation
void enqueue(int x)
{
    if(q.rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        if(q.front == -1)
            q.front = 0;
        q.data[++q.rear] = x;
    }
}

// Dequeue operation
void dequeue()
{
    if(q.front == -1 || q.front > q.rear)
        printf("Queue Underflow\n");
    else
    {
        printf("Deleted element: %d\n", q.data[q.front]);
        q.front++;
    }
}

// Display operation
void display()
{
    if(q.front == -1 || q.front > q.rear)
        printf("Queue is empty\n");
    else
    {
        printf("Queue elements:\n");
        for(int i = q.front; i <= q.rear; i++)
            printf("%d ", q.data[i]);
        printf("\n");
    }
}

int main()
{
    init();

    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}
