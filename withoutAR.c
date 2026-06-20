#include<stdio.h>
void sum();
void main()
{
 printf("tis example for function without argument and return value\n");
 sum();
}
void sum()
{
    int a,b,c;
    printf("give two number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum=%d",c);
}
