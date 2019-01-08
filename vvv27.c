#include<stdio.h>
void main()
{
int A[20],n,i,sum=0,neg=0,pos=0,pnum=0,nnum=0;
printf("enter array size\n");
scanf("%d",&n);
printf("enter the array element\n");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
for(i=0;i<n;i++)
{
if(A[i]>0)
{
        pos++;
	pnum=pnum+A[i];
}
 else
{        neg++;
	nnum=nnum+A[i];
}
}
printf("cout of pos nos=%d\n",pos);
printf("cout of pos nos=%d\n",pnum);
printf("cout of neg nos=%d\n",neg);
printf("cout of neg nos=%d\n",nnum);
}

