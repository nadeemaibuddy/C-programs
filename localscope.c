#include<stdio.h>
void local();
void main()
{
 int a=6,b=5;
printf("a+b=%d\n",a+b);
local();
}

void local()
{
 int a=3,b=4;
 printf("a+b=%d",a+b);
}