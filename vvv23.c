#include<stdio.h>
void main()
{
int n,fact=1;
printf("enter the number:\n");
scanf("%d",&n);
while(n>0)
{
fact=fact*n;
n=n-1;
}
printf("factional of given  no is %d",fact);
}
