#include<stdio.h>
void main()
{
int a[10][10],i,j,row,col;
printf("Enter the number of row\n");
scanf("%d",&row);
printf("Enter the number of col\n");
scanf("%d",&col);
printf("Enter the array element\n");
for(i=0;i<row;i++)
for(j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
}
printf("matrix 1:");
for(i=0;i<row;i++)
{
printf("\n");
for(j=0;j<col;j++)
{
printf("%d\t",a[i][j]);
}
}
printf("\nEnter the arry 2 element\n");
for(i=0;i<row;i++)
for(j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
}
printf("matrix 2:");
for(i=0;i<row;i++)
{
printf("\n");
for(j=0;j<col;j++)
{
printf("%d\t",a[i][j]);
}
}
}
