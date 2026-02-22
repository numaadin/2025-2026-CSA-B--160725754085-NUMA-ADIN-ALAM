#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;

};void insertAtPosition(struct Node**head,int data,int position)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;
temp->next=NULL;
if(position==1){
temp->next=*head;
*head=temp;
return;
}
struct Node*current=*head;
for(int i=1;current != NULL && i<position-1;i++)
{
current=current->next;
}

if(current==NULL){
printf("position out of range!\n");
free(temp);
return;
}
temp->next=current->next;
current->next=temp;

}
void displayNodes(struct Node*head){
struct Node*current=head;
printf("singly linked list:");
while(current!=NULL){
printf("%d->",current->data);
current=current->next;



}

printf("NULL\n");
}
int main() {
struct Node*head=NULL;
insertAtPosition(&head,10,1);
insertAtPosition(&head,20,2);
insertAtPosition(&head,30,3);
insertAtPosition(&head,40,3);
insertAtPosition(&head,50,5);

displayNodes(head);
return 0;


}
