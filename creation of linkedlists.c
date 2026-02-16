#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node*next;
};
void createNode(struct node**head,int data)
{
struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;
temp->next=NULL;
if(*head==NULL)
{
*head=temp;
return;

}
struct Node*current=*head;
while(current->next!=NULL)
{
current=current->next;
}
current->next=temp;
}
void displayNodes(struct node*head){
struct node*current=head;
printf("singly linked list:");
while(current!=NULL){
printf(%d->",current->data);
current=current->next;

}
printf("NULL\n");
}
int main(){
struct Node*head=NULL;
display nodes(head);

create Node(&head,10);
create Node(&head,15);
create Node(&head,20);
create Node(&head,25);
displaynodes(head);
return 0;
}
