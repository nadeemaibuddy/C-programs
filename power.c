#include<stdio.h>
int power(int,int);
void main()
{
    int x,n,result;
    printf("give base number\n");
    scanf("%d",&x);
    printf("give power number");
    scanf("%d",&n);
    result=power(x,n);
    printf("%d",result);
}
int power(int a,int b)
{
    if(b!=0)
    return a*power(a,b-1);
    else
    return 1;
}
