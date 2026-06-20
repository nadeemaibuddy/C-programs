#include<stdio.h>

void main()
{
int a, i=1;
printf("This is a program to print range of odd numbers");
printf("\nEnter number of odd numbers to be printed");
scanf("%d",&a);
while(i<=a)
{
printf("\n%d",i);
i=i+2;
}
}