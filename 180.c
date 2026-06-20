#include<stdio.h>

void main()
{
int a,b,c,d;
printf("enter three angles i will tell if we can construct tringle with give angle");
scanf("%d%d%d",&a,&b,&c);
d=a+b+c;
if(d==180)
{
    printf("we can construct triangle with given angles ");
}
else
{
    printf("we can't construct triangle with given angles ");
}
}