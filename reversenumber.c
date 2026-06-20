#include<stdio.h>

void main()
{
int n,r, rev=0;
printf("This program is to print the given number in reverse");
printf("\nEnter any number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("%d",rev);
}