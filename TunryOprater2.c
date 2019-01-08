#include<stdio.h>
void main()
{
int a,b,c,d,e;
printf("enter tree numbers=\n");
scanf("%d%d%d",&a,&b,&c);
d=(a>b)?a:b;
e=(d>c)?d:c;
printf("the biggest numbers is%d\n",e);
}

