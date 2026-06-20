#include<stdio.h>

void main()
{
int a,b,c,na;
printf("give two number");
scanf("%d%d",&a,&b);
printf("enter your choise\n1 for addition\n2 for subritction\n3 for multiplaction\n4 for average");
scanf("%d",&na);
switch (na)
{
case 1:
c=a+b;
printf("sum of two numbers=%d",c);
break;
case 2:
c=a-b;
printf("subtraction of two numbers=%d",c);
break;
case 3:
c=a*b;
printf("multiplaction of two numbers=%d",c);
break;
case 4:
c=a+b/2;
printf("average of two numbers=%d",c);
break;
default:
printf("enter form choice");
break;
}
}