#include<stdio.h>
void main()
{
int dec,n,rem,bin=0,a=1;
printf("Enter the decimal number:\n");
scanf("%d",&dec);
n=dec;
while(n>0)
{
rem=n%2;
bin=bin+rem*a;
n=n/2;
a=a*10;
}
printf("Bin=%d",bin);
}
