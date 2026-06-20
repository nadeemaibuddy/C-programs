#include<stdio.h>
void main()
{
    int n,i;
    printf("give range of even numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}