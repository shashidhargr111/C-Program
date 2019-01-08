#include<stdio.h>
#define maxsize 5
int q[10],f=0,r=-1,*p,ch,count=0;
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
if(count==maxsize)
{
printf("circul queues overflow\n");
}
else
{
printf("Enter the element to be insert\n");
scanf("%d",&num);
r=(r+1)%maxsize;
*(p+r)=num;
count++;
}
}
}
void del()
{
if(count==0)
{
printf("queues is empty\n");
}
else
{
printf("The element deleted is=%d\n",*(p+f));
f=(f+1)%maxsize;
count--;
}
}
void display()
{
int i,j;
if(count==0)
{
printf("Queues is empty\n");
}
else
{
printf("The cotent of the queues are\n");
printf("count-%d\n",count);
for(j=0,i=f;j<count;j++)
{
printf("%d\n",*(p+i));
i=i++;
i=i%maxsize;
}
}
}
