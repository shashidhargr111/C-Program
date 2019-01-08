#include<stdio.h>
void main(_)
{
int a,b,sum,diff,divi,mult;
int *p,*q;
p=&a;
q=&b;
printf("Enter the value a and b\n");
scanf("%d%d",&a,&b);
sum=(*p)+(*q);
diff=(*p)-(*q);
mult=(*p)*(*q);
divi=(*p)/(*q);
printf("sum=%d\n",sum);
printf("diff=%d\n",diff);
printf("mult=%d\n",mult);
printf("divi=%d\n",divi);
}
