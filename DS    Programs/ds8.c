#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
int count=0;
char ch;
fp=fopen("file.text","r");
while((ch=getc(fp))!=EOF)
{
count++;
printf("%c",ch);
}
fclose(fp);
printf("The number of character is = %d\n",count);
}
