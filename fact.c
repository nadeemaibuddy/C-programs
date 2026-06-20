#include<stdio.h>

void main()
{
int n,i,result=1,a;
printf("give any number");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
result=result*i;

}
printf("%d",result);

}