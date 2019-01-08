#include<stdio.h>
#define maxsize 5
int stack[10],ch,*p,top=-1;
void push();
void pop();
void display();
int main()
{
p=stack;
while(1)
{
printf("Enter 1 to push\n");
printf("Enter 2 to pop\n");
printf("Enter 3 to display\n");
printf("Enter 4 to exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:return 0;
}
}
}
void push()
{
int num;
if(top==maxsize-1)
{
printf("stack is full\n");
}
{
printf("Enter the number to be pushed\n");
scanf("%d",&num);
top=top+1;
*(p+top)=num;
}
}
void pop()
{
if(top==-1)
{
printf("stack is empty\n");
}
else
{
printf("Deleted element is =%d\n",*(p+top));
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
{
printf("stack is empty\n");
}
else
{
printf("stack element are\n");
for(i=0;i<=top;i++)
{
printf("%d\n",*(p+i));
}
}
}
