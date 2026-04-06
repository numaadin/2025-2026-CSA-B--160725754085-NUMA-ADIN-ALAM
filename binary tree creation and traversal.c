#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*left;
struct Node*right;
};
struct Node*createNode(int value){
struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=value;
temp->left=NULL;
temp->right=NULL;
return temp;
}
struct Node*createTree(){
int value;
printf("enter value(-1 for no node):");
scanf("%d", &value);
if(value==-1)
return NULL;
struct Node*temp=createNode(value);
printf("enter left child of %d\n",value);
temp->left=createTree();
printf("enter right child of %d\n",value);
temp->right=createTree();
return temp;
}
void inorder(struct Node*root)
{
if(root==NULL)
return;
inorder(root->left);
printf("%d",root->data);
inorder(root->right);
}
void preorder(struct Node*root)
{
if(root==NULL)
return;
printf("%d",root->data);
preorder(root->left);
preorder(root->right);
}
void postorder(struct Node*root)
{
if(root==NULL)
return;
postorder(root->left);
postorder(root->right);
printf("%d",root->data);
}
//main function
int main()
{
struct Node*root=NULL;
printf("create binary tree\n");
root=createTree();
printf("\n inorder traversal");
inorder(root);
printf("\n postorder traversal");
preorder(root);
printf("\n postorder traversal");
postorder(root);
return 0;
}
