#include<stdio.h>
void main()
{
int i,n,flog=1;
printf("Enter a number\n");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flog=0;
break;
}
}
if(flog==1)
printf("prime number\n");
else
printf("not a prime number\n");
}
