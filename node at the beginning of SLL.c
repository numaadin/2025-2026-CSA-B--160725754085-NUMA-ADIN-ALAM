#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
void insertAtBeginning(struct Node**head,int data)
{
struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;
temp->next= *head;
*head=temp;
}
void displayNodes(struct Node*head)
{
struct Node*current=head;
printf("singly linked list:");
while(current!=NULL){
printf("%d->",current->data);
current=current->next;
}
printf("NULL\n");
}
int main(){
struct Node*head=NULL;
insertAtBeginning(&head,30);
insertAtBeginning(&head,20);
insertAtBeginning(&head,10);
displayNodes(head);
return 0;



}
