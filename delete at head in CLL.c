#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void deleteAtBeginning(struct Node **head, struct Node **tail)
{
    if (*head == NULL)
    {
        printf("Nothing to delete\n");
        return;
    }

    struct Node *temp = *head;

    // If only one node
    if (*head == *tail)
    {
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        *head = (*head)->next;
        (*tail)->next = *head;
    }

    free(temp);
}

void displaynodes(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *current = head;

    printf("Circular Linked List: ");

    do
    {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);

    printf("(head)\n");
}

int main()
{
    struct Node *head = NULL;
    struct Node *tail = NULL;

    // Creating nodes manually for testing
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = head;

    tail = n3;

    displaynodes(head);

    deleteAtBeginning(&head, &tail);

    displaynodes(head);

    return 0;
}

