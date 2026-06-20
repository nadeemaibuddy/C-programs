#include<stdio.h>
int mul();
void main()
{
    int result;
 printf("this example for function without argument and return value\n");
 result=mul();
 printf("mul=%d",result);
}
int mul()
{
    int a,b,c;
    printf("give two number");
    scanf("%d%d",&a,&b);
    c=a*b;
    return c;
}