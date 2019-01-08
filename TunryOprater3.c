#include<stdio.h>
void main()
{
int a,b,c,d,e;
printf("enter tree numbers=\n");
scanf("%d%d%d",&a,&b,&c);
d=(a<b)?a:d; 
e=(d<c)?d:c; 
printf("the smallest numbers is%d\n",e);
}
