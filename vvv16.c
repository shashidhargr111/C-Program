#include<stdio.h>
void main()
{
int i,n,f1=0,f2=1,f3;
printf("enter a limit:\n");
scanf("%d",&n);
printf("%d\n%d\n",f1,f2);
for(i=3;i<=n;i++)
{
f3=f1+f2;
printf("fibonacci series:%d\n",f3);
f1=f2;
f2=f3;
}
} 
