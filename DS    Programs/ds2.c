#include<stdio.h>
void main()
{
int a[10],i,n,*p,small;
printf("Enter the size of an array\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
p=&a[0];
n=0;
small=999;
while(n<5)
{
if(*p<small)
{
small=*p;
}
p=p+1;
n=n+1;
}
printf("smallest element is an array is %d\n",small);
}
