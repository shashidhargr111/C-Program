#include<stdio.h>
void main()
{
int a[10],i,j,n,temp;
printf("Enter the size of an array\n");
scanf("%d",&n);
printf("Enter the element\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted the number\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}