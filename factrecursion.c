#include<stdio.h>
int fact(int);
void main()
{
    int n,f;
    printf("give any number");
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
}
int fact(int x)
{
    if(x==0)
    return 1;
    if(x!=0)
    {
        return x*fact(x-1);
    }
}