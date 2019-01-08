#include<stdio.h>
void main()
{
char str[20],rev[20];
int n,i;
printf("Enter the string");
scanf("%s",str);
n=strlen(str);
for(i=0;str[i]!='\0';i++);
{
rev[i]=str[--n];
}
rev[i]='\0';
if(strcmp(str,rev)==0)
printf("string is palindrone");
else
printf("string is not palindrone");
}

