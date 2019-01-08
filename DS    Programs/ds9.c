#include<stdio.h>
void main()
{
FILE *p;
char book_name[10],publisher[10],author[10];
int book_num,price,i;
p=fopen("book.text","w");
for(i=0;i<5;i++)
{
printf("Enter the\nbook_num\tbook_name\tauthor\tpublisher\tprice\n");
scanf("%d%s%s%s%d",&book_num,book_name,author,publisher,&price);
fprintf(p,"%d\t%s\t%s\t%s\t%d\n",book_num,book_name,author,publisher,price);
}
{
fclose(p);
}
}
