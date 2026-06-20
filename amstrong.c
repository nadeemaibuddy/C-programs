#include<stdio.h>
void main() 
{
int n,r,a=0,d;
printf("This program is to find out given number is an Armstrong or not");
printf("Enter any number");
scanf("%d",&n);
d=n;
while(n!=0)
{
r=n%10;
a=a+r*r*r;
n=n/10;
}
if(d==a) 
{
printf("Given number is amstrong");
}
else
{
printf("Given number is not an amstrong");
}
}