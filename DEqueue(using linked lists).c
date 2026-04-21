#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Insert at front
void insertFront(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->prev = NULL;
    temp->next = front;

    if(front == NULL)
        front = rear = temp;
    else
    {
        front->prev = temp;
        front = temp;
    }
}

// Insert at rear
void insertRear(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    temp->prev = rear;

    if(rear == NULL)
        front = rear = temp;
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

// Delete from front
void deleteFront()
{
    if(front == NULL)
    {
        printf("Deque is empty\n");
        return;
    }

    struct Node* temp = front;
    printf("Deleted: %d\n", temp->data);

    if(front == rear)
        front = rear = NULL;
    else
    {
        front = front->next;
        front->prev = NULL;
    }

    free(temp);
}

// Delete from rear
void deleteRear()
{
    if(rear == NULL)
    {
        printf("Deque is empty\n");
        return;
    }

    struct Node* temp = rear;
    printf("Deleted: %d\n", temp->data);

    if(front == rear)
        front = rear = NULL;
    else
    {
        rear = rear->prev;
        rear->next = NULL;
    }

    free(temp);
}

// Display deque
void display()
{
    if(front == NULL)
    {
        printf("Deque is empty\n");
        return;
    }

    struct Node* temp = front;
    printf("Deque elements: ");

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
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
