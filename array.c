#include<stdio.h>
void main()
{
int A[10],n,i,key;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the value of array\n");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
printf("enter the key value\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==A[i])
       break;
}
if(A[i]==key)
printf("key is founded at %d",i+1);
else
printf("key is not funded");
}
