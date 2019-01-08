#include<stdio.h>
void swapv(int,int);
void swapr(int*,int*);
void main()
{
int a,b;
printf("Enter the a & b value\n");
scanf("%d%d",&a,&b);
printf("number before swapping a=%d,b=%d\n",a,b);
swapv(a,b);
printf("Number after swapping with value a=%d,b=%d\n",a,b);
swapr(&a,&b);
printf("Number after swapping with reference a=%d,b=%d\n",a,b);
}
void swapv(int a,int b)
{
int c;
c=a;
a=b;
b=c;
}
void swapr(int &a,int &b)
{
int c;
c=*p;
*p=*q;
*q=c;
}
