#include<stdio.h>

void main()
{
int i=0,a;
printf("This is a program to turn on or off a fan");
printf("\nENTER\n1 To Turn on\n2 To Turn off");
while(i<10)
{
scanf("%d",&a);
if(a>2)
{
printf("enter from choice");
}
if(a==1) 
{
printf("Turned fan on");
}

if(a==2)
{
printf("Turned fan off");
}
i++;
if(i>=10)
{
printf("\nthe bulb is fuesd");
}
}
}