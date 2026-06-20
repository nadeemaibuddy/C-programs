#include<stdio.h>

void main()
{
int a;
printf("give a number i will tell it is positive or negative");
scanf("%d",&a);
if(a!=0)
{
    if(a>0)
    {
        printf("number is positive");
    }
    else
    {
        printf("number is negative");
    }
}
else
{
    printf("number is zero");
}



}