#include<stdio.h>
void main()
{
int i,j,n,a[10],item;
printf("Enter the size of an array\n");
scanf("%d",&n);
printf("Enter the element of an array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
item=a[i];
j=i-1;
while(item<a[j]&&j>=0)
{
a[j+1]=a[j];
j=j-1;
a[j+1]=item;
}
}
printf("Sorted array is \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
