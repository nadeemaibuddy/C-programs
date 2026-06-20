#include<stdio.h>

void main()
{
int a,b,c;
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
if((a!=b)&&(b!=c))
{
if((a>b)&&(a>c))
{
    printf("a is bigger number");
}
else
if((b>a)&&(b>c))
{
    printf("b is bigger number");
}
else
{
    printf("c is bigger");
}
}
else
{
    printf("give three different numbers");
}



}