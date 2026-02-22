 #include <stdio.h>
#include <stdlib.h>

// Define structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to delete the first node
void deleteAtBeginning(struct Node** head) {

    if (*head == NULL) {
printf("List is empty. Cannot delete\n");
        return;
    }

    struct Node* temp = *head;     // store first node
    *head = (*head)->next;         // move head only one step
    free(temp);                    // delete first node
}

// Function to display nodes
void displayNodes(struct Node* head) {

    struct Node* temp = head;

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {

    // Creating 3 nodes
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));

    // Assign values
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    // Linking using temp node (n2)
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    // head points to first node
    struct Node* head = n1;

    printf("Original List:\n");
    displayNodes(head);

    // Delete first node using only head = head->next
    deleteAtBeginning(&head);

    printf("After deleting first node:\n");
    displayNodes(head);

    return 0;
}
