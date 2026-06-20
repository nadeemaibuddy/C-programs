#include<stdio.h>

void main()
{
int n,a,r,rev=0;
printf("This program is to find given number is palindrome");
printf("\nGive any number");
scanf("%d",&n);
a=n;
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(a==rev)
{
printf("Given number is palindrome");
}
else
{
printf("Given number is not palindrome");
}
}