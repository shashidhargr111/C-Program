#include<stdio.h>
void main()
{
int n,rem,sum=0,rev=0;
printf("Enter N number\n");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
printf("rem=%d\n",rem);
sum=sum+rem;
printf("sum=%d\n",sum);
rev=rev*10+rem;
printf("rev=%d\n",rev);
n=n/10;
printf("n=%d\n",n);
printf("-----------------\n");
}
printf("sum of the number =%d\n",sum);
printf("-----------------\n");
printf("reverse number =%d\n",rev);
printf("-----------------\n");
printf("The N number is =%d\n",n);
printf("-----------------\n");
}
