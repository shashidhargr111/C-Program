#include<stdio.h>
main()
{
char d;
printf("enter a charactor\n");
scanf("%c",&d);
if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='A'||d=='E'||d=='I'||d=='O'||d=='U')
{
printf("%c is vowel",d);
else
printf("%cis not vowel",d);
}
}
