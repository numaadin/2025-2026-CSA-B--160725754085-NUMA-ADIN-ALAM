#include<stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE],front=-1,rear=-1;

void insert(int value){
if(rear==MAX_SIZE-1)
printf("\n\t queue is overflow\n");
else
{
if(front==-1)
front=0;
queue[++rear]=value;
printf("\n\t %d has been inserted into the queue \n",value);
}
}
void delete (){
if(front==-1 || front>rear)
printf("\n\t queue is underflow\n");
else{
printf("\n\t %d has been deleted from the queue \n",queue[front++]);
if(front>rear)
front=rear=-1;
}
}
void display(){
if (front==-1 || front>rear)
printf("\n\tqueue is empty\n");
else {
printf("\n\t the elements in the queue are :\n");
for(int i=front;i<=rear;i++)
printf("\t %d\n",queue[i]);
}
}
int main(){
int choice,x;
printf("\n\t QUEUE OPERATIONS USING ARRAY");
printf()





}
