#include<stdio.h>
main()
{
int a,b;
printf("enter the two variables");
scanf("%d%d",&a,&b);
printf("before swapping A=%dB=%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("after swaping A=%dB=%d",a,b);
}
