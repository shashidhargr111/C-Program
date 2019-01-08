#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,root1,root2,imaginary,real,i;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d==0)
{
print("roots are equals");
root1=root2=-b/(2*a);
printf("root1=%f,root2=%f",root1,root2);
}
else
if(d>0)
{
printf("roots are real and different");
root1=(-b+sqrt(d))/2*a;
root2=(-b-sqrt(d))/2*a;
printf("root1=%f\n root2=%f",root1,root2);
}
else
{
printf("roots are imaginary");
d=-d;
real=-b/(2*a);
imaginary=sqrt(d);
printf("root1=%f+%fi",real,imaginary);
printf("root2=%f-%fi",real,imaginary);
}
}

