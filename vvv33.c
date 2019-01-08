#include<stdio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
printf("Enter order of matrix A and B\n");
scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
if(c1!=r2)
printf("matrix multiplication not possibble\n");
else
printf("Enter element of matrixA:\n");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
printf("Enter element of matrix B:\n");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
{
c[i][j]=0;
for(k=0;k<r2;k++)
c[i][j]=c[i][j]+a[i][j]+a[i][j]*b[k][j];
}
printf("Multipliction of A and B:\n");
for(i=0;i<r1;i++)
{printf("\n");
for(j=0;j<c2;j++)
printf("%d\t",c[i][j]);
}
}

