#include<stdio.h>

void main()
{
int a;
printf("give one number");
scanf("%d",&a);
if((a!=0)&&(a!=1))
{
if(a%2==0)
{
    printf("give number is even");
}

else
{
    printf("given number is odd");
}
}
else
{
    printf("given number is nor even or odd");
}


}