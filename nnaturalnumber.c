#include<stdio.h>

void main()
{
int a, i=1;
printf("This is a program to print range of natural  numbers");
printf("\nEnter number of natural numbers to be printed");
scanf("%d",&a);
while(i<=a)
{
printf("\n%d",i);
i++;
}
}