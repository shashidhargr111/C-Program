#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *llink;
int data;
struct node *rlink;
};
typedef struct node *NODE;
NODE insert(NODE);
void preorder(NODE);
void inorder(NODE);
void postorder(NODE);
int main()
{
NODE root=NULL;
int ch;
while(1)
{
printf("Enter\n1:insert\n2:preorder\n3:inorder\n4:postorder\n5:exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:root=insert(root);
	break;
case 2:if(root==NULL)
	printf("Empty\n");
	else
	preorder(root);
	break;
case 3:if(root==NULL)
	printf("empty\n");
	else
	inorder(root);
	break;
case 4:if(root==NULL)
	printf("empty\n");
	else
	postorder(root);
	break;
case 5:return 0;

default:printf("Invalid choice\n");
}
}
}

NODE insert(NODE root)
{
int item;
NODE temp,prev,cur;
printf("Enter the element\n");
scanf("%d",&item);
temp=(NODE)malloc(sizeof(struct node));
temp->llink=NULL;
temp->data=item;
temp->rlink=NULL;

cur=root;
prev=NULL;
if(root==NULL)
	return temp;
else
{
while(cur!=NULL)
{
	prev=cur;
	if(item>cur->data)
	cur=cur->rlink;
	else
	cur=cur->llink;
}

if(item<prev->data)
	prev->llink=temp;
else
	prev->rlink=temp;
return root;
}
}

void preorder(NODE root)
{
if(root!=NULL)
{
printf("%d\n",root->data);
preorder(root->llink);
preorder(root->rlink);
}
}

void inorder(NODE root)
{
if(root!=NULL)
{
inorder(root->llink);
printf("%d\n",root->data);
inorder(root->rlink);
}
}
void postorder(NODE root)
{
if(root!=NULL)
{
postorder(root->llink);
postorder(root->rlink);
printf("%d\n",root->data);
}
}
