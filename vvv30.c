#include<stdio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j;
int row1,row2,col1,col2;
printf("Enter the size of fast matrx\n");
scanf("%d%d",&row1,&col1);
printf("Enter the element for fist matrix\n");
for(i=0;i<row1;i++)
for(j=0;j<col1;j++)
scanf("%d",&a[i][j]);
printf("Enter the size of second matrix\n");
scanf("%d%d",&row2,&col2);
printf("Enter the element for second matrix\n");
for(i=0;i<row2;i++)
for(j=0;j<col2;j++)
scanf("%d",&b[i][j]);
printf("fist matix is->");
for(i=0;i<row1;i++)
{
printf("\n");
for(j=0;j<col1;j++)
printf("%d\t",a[i][j]);
}
printf("\nsecond matrix is");
for(i=0;i<row2;i++)
{
printf("\n");
for(j=0;j<col2;j++)
printf("%d\t",b[i][j]);
}
for(i=0;i<row1;i++)
for(j=0;j<col1;j++)
c[i][j]=a[i][j]+b[i][j];
printf("\naddition of two matrix is");
for(i=0;i<row1;i++)
{
printf("\n");
for(j=0;j<col1;j++)
printf("%d\t",c[i][j]);
}
}

