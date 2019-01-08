#include<stdio.h>
void main()
{
int key,n,a[10],i,mid,low,high;
printf("Enter the size of an array\n");
scanf("%d",&n);
printf("Enter the element of an array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be search\n");
scanf("%d",&key);
high=n-1; low=0;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
printf("element is found at %d position",mid+1);
break;
{
high=mid-1;
}
}
else
{
if(key<a[mid])
{
low=mid+1;
}
}
if(low>high)
{
printf("key not found");
}
}
}
