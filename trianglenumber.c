#include<stdio.h>
void main()
{
int a,b,n;
printf("give number of number you want to print");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
printf("\n");
for(b=a;b>0;b--)
{
printf("%d",b);
}
}



}