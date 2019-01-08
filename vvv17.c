#include<stdio.h>
void main()
{
float p,t,r,si;
printf("enter principal amount \n");
scanf("%f",&p);
printf("enter time\n");
scanf("%d",&t);
if(p>10000)
r=0.2;

else
if(p>=8000&&p<=9999)
r=0.16;
si=(p*t*r)/100;
printf("simple interest=%d",si);
}
