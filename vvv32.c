#include<stdio.h>
void main()
{
int a[10][10],i,j,row,col;
printf("Enter the size of matrix\n");
scanf("%d%d",&row,&col);
printf("Enter the element of matrix\n");
for(i=0;i<row;i++)
for(j=0;j<col;j++)
scanf("%d",&a[i][j]);
printf("before transpose matrix is.......\n");
for(i=0;i<row;i++)
{
printf("\n");
for(j=0;j<col;j++)
printf("%d\t",a[i][j]);
}
printf("\nthe transpose matrix is ");
for(i=0;i<col;i++)
{printf("\n");
for(j=0;j<row;j++)
printf("%d\t",a[j][i]);
}
}
