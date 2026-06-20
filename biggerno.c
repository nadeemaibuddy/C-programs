#include<stdio.h>

void main()
{
int a,b;
printf("give two number i will tell which is big one");
scanf("%d%d",&a,&b);
if(a!=b)
{
    if(a>b)
    {
        printf("a is bigger number");
    }
    else
    {
        printf("b is bigger");
    }
}



}