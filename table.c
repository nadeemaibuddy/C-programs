#include<stdio.h>
void main()
{
int a,b,n;
printf("give number of number you want to print");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
printf("\n");
for(b=1;b<=n;b++)
{
printf("%2d",a*b);
}
}

}