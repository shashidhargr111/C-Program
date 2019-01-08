#include<stdio.h>
void main()
{
int bin,n,rem,dec=0,a=1;
printf("Enter the binarynumber :\n");
scanf("%d",&bin);
n=bin;
while(n>0)
{
rem+n%10;
dec=dec+rem*a;
n=n/10;
a=a*2;
}
printf("Decimal number+%d",dec);
}

