#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void insertAtPosition(struct Node **head, struct Node **tail, int data, int position)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if(position == 1)
    {
        temp->next = *head;
        *head = temp;

        if(*tail == NULL)
            *tail = temp;

        return;
    }

    struct Node *current = *head;

    for(int i=1; current!=NULL && i<position-1; i++)
    {
        current = current->next;
    }

    if(current == NULL)
    {
        printf("Position out of range\n");
        free(temp);
        return;
    }

    temp->next = current->next;
    current->next = temp;

    if(temp->next == NULL)
        *tail = temp;
}

void displayNodes(struct Node *head)
{
    struct Node *current = head;

    while(current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;
    struct Node *tail = NULL;

    insertAtPosition(&head,&tail,10,1);
    insertAtPosition(&head,&tail,20,2);
    insertAtPosition(&head,&tail,40,3);
    insertAtPosition(&head,&tail,30,3);
    insertAtPosition(&head,&tail,50,5);

    displayNodes(head);

    return 0;
}
