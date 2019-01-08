#include<stdio.h>
void main()
{
char c;
printf("enter any char.\n");
scanf("%c",&c);
switch(c)
{
case'A':
case'a':printf("%c is vowel\n",c);
break;
case'E':
case'e':printf("%c is vowel\n",c);
break ;
case'I':
case'i':printf("%c is vowel\n",c);
break;
case'O':
case'o':printf("%C is vowel\n",c);
break;
case'U':
case'u':printf("%c is vowel\n",c);
break;
default:printf("%c is not vowel\n");
break;
}}

