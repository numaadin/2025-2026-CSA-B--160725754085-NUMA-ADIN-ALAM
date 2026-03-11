#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void deleteAtPosition(struct Node **head, struct Node **tail, int pos)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *temp;

    // Delete first position
    if (pos == 1)
    {
        temp = *head;

        if (*head == *tail)   // Only one node
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
        return;
    }

    struct Node *current = *head;

    for (int i = 1; i < pos - 1; i++)
    {
        current = current->next;
        if (current->next == *head)
        {
            printf("Position out of range\n");
            return;
        }
    }

    temp = current->next;

    current->next = temp->next;

    if (temp == *tail)
    {
        *tail = current;
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

    // Creating nodes
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node *)malloc(sizeof(struct Node));

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = head;

    tail = n4;

    displaynodes(head);

    deleteAtPosition(&head, &tail, 3);  // Delete position 3

    displaynodes(head);

    return 0;
}
