#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Node
 {
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    struct Node *temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to delete at specific position
void deleteAtPosition(struct Node **head, int position)
{

    if(*head == NULL) {
        printf("No nodes to delete\n");
        return;
    }

    struct Node *current = *head;
    int i = 1;

    // Delete first node
    if(position == 1) {
        struct Node *temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    // Traverse to (position - 1)
    while(i < position - 1 && current->next != NULL) {
        current = current->next;
        i++;
    }

    if(current->next == NULL) {
        printf("Position out of range\n");
        return;
    }

    struct Node *temp = current->next;
    current->next = temp->next;
    free(temp);
}

// Main Function
int main() {

    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;

    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;

    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30;

    head->next->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->next->data = 40;

    head->next->next->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->next->next->data = 50;

    head->next->next->next->next->next = NULL;

    printf("Original List:\n");
    display(head);

    int pos;
    printf("Enter the position in which you want to delete the node: ");
    scanf("%d", &pos);

    deleteAtPosition(&head, pos);

    printf("List after deletion:\n");
    display(head);

    return 0;
}
