#include<stdio.h>
void main()
{
int a[10],i,j,temp,min,n;
printf("Enter the array size\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
{
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j;
}
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
printf("sorted array is \n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
