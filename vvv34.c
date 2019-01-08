#include<stdio.h>
void main()
{
char name[10][10],temp[20];
int i,j,n;
printf("Enter the nimber of namr to be sarted\n");
scanf("%d",&n);
printf("Enter the name");
for(i=0;i<n;i++)
scanf("%s",name[i]);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(name[i],name[j])>0)
{
strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp);
}
}
}
printf("Display name\n");
for(i=0;i<n;i++)
printf("%s\n",name[i]);
}
