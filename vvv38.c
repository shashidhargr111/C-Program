#include<stdio.h>
void main()
{
char str[50];
int vow=0,con=0,dig=0,spl=0,n,i,ch,spa=0;
printf("Enter the string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
ch=tolower(str[i]);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
vow++;
else
if(ch>='a'&&ch<='z')
con++;
else
if(ch>='0'&&ch<=9)
dig++;
else
if(ch=' ')
spa++;
else
spl++;
}
printf("number of vowels=%d\n",vow);
printf("number of consonants=%d\n",con);
printf("number of ditits=%d\n",dig);
printf("number of space=%d\n",spa);
printf("number of special char=%d\n",spl);
}

