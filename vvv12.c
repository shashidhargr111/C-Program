#include<stdio.h>
void main()
{
int i,n,sum=0;
for(i=100;i<200;i++)
{if(i%7==0)

{sum=sum+i;
printf("%d\n",i);
}
}
printf("the sum is :%d\n",sum);
}
