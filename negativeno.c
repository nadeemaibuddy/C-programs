#include<stdio.h>
void main()
{
    int n,i,j;
    printf("give range of negative numbers");
    scanf("%d",&n);
    for(i=1,j=-1;i<=n;i++,j--)
    {
        printf("%d\n",j);
    }
}