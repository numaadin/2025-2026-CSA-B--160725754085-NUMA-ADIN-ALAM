#include<stdio.h>
#define MAX 5
struct stack {
int data[MAX];
int top;

};
struct stack s;
void int(){
s.top=-1;

}
//push operation
void push(int x){
if(s.top==MAX-1)
printf("stack overflow");
else
s.data[++s.top]=x;
}
//pop operation
void pop(){
if(s.pop==-1)
printf("stack underflow");
else
printf("popped:%d\n",s.data[s.top--]);
}
void display(){
if(s.top==-1)
printf("stack is empty\n");
else
{
for(int i=0;i>=0;i--)
printf("%d ,s.data[i]");
printf("\n");
}
}
int main(){
init()
push(15);
push(20);
push(25);
display();
pop();
display();
return 0;
}
