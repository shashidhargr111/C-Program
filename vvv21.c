#include<math.h>
#include<stdio.h>
void main()
{
int a,b,c,d,ch;
float r1,r2;
printf("enter three values\n");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d>0)  ch=1
if(d==0) ch=2
if(d<0)  ch=3
printf("enter your choice\n");
switch(ch)
{
      case 1:printf("roots are real and unequal");
          r1=(-b+sqrt(d))/(2*a);
          r2=(-b-sqrt(d))/(2*a);
          printf("r1=%f r2= %f",r1,r2);
break;

     case 2:printf("root are equal");
          r1=-b/(2*a);
          r2=r1
          printf("r1=%f r2=%f",r1,r2);
break;

     case 3:print("root are imginary\n");
break;
     deafult;printf("Invalid choice\n");
break;
}
}
~                                                                               
~                                                                               
~                                                                               
~                                                    
