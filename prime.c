#include<stdio.h>
#include<math.h>
void main()
{
int i=2,n,p=1;
printf("give any number");
scanf("%d",&n);
if(n<=1)
{
printf("number is not prime");
}
else
{
while(i<=sqrt(n))
{
if(n%i==0)
{
    p=0;
    break;
}
i++;
}
if(p==1)
{
    printf("prime");
}
else
{
printf("np");
}
}


}