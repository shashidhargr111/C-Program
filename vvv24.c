#include<stdio.h>
void main()
{
int n,fact;
printf("enter a number:\n");
scanf("%d",&n);
fact=factorial(n);
printf("factorial of %d is %d",n,fact);
}
factorial(int n)
{
int fact=1,i;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}
