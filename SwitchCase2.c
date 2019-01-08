#include<stdio.h>
void main()
{
int a,b,c,num;
printf("enter 2 numbers.\n");
scanf("%d%d",&a,&b);
printf("1:addition\n2:sub\n3:muilt\n4:div\n");
scanf("%d",&num);
switch(num)
{
case 1:c=a+b;
printf("c=%d\n",c);
break;
case 2:c=a-b;
printf("c=%d\n",c);
break;
case 3:c=a*b;
printf("c=%d\n",c);
break;
case 4:c=a/b;
printf("c=%d\n",c);
break;
}
}
