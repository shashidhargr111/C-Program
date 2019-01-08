#include<stdio.h>
void main()
{
int a,b,g;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
g=gcd(a,b);
printf("gcd of a and b=%d\n",g);
}
int gcd(int a,int b)
{
while(a!=b)
{
if(a>b)
{
a=a-b;
}
if(b>a)
{
b=b-a;
}
}
}
