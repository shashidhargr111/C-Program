#include<stdio.h>
#define maxsize 5
int q[20],f=0,r=-1,*p,ch;
void insert();
void del();
void display();
int main()
{
p=q;
while(1)
{
printf("Enter 1 to insert\n");
printf("Enter 2 to delete\n");
printf("Enter 3 to display\n");
printf("Enter 4 to exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:del();
break;
case 3:display();
break;
case 4:return 0;
break;
default:printf("Invalid choice\n");
}
}
}
void insert()
{
int num;
{
if(r==maxsize-1)
{
printf("queue overflow\n");
return;
}
else 
printf("Enter the element to be inserted\n");
scanf("%d",&num);
r=r+1;
*(p+r)=num;
}
}
void del()
{
if(f>r)
{
printf("Queues underflow\n");
return;
}
else
{
printf("The element deleted is =%d\n",*(p+f));
f=f+1;
}
if(f>r)
{
f=0;r=-1;
}
}
void display()
{
int i;
if(f>r)
{
printf("Queues underflow\n");
return;
}
else
{
printf("The content of Queues are\n");
for(i=f;i<=r;i++)
printf("%d\n",*(p+i));
}
}
