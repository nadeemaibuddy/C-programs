#include<stdio.h>

void main()
{
int a;
printf("enter any year i will say it is a leap year");
scanf("%d",&a);
if(a%4==0)
{
printf("given year is leap year");
}
else
{
    printf("given year is not a leap year");
}

}