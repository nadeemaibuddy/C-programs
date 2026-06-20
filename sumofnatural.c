#include<stdio.h>

void main()
{
int a=1,b,n;
printf("This program is to print sum of n natural number");
printf("Enter number of natural to be print");
scanf("%d",&n);
while(a<=n)
{
printf("\n%d",a);
a++;
}
b=n*(n+1)/2;
printf("\nThe sum of given number is=%d",b);
}