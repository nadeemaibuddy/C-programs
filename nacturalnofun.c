#include<stdio.h>
void natural();
void main()
{
    printf("this program is to print natural number using function\n");
    natural();
}
void natural()
{
    int n,i;
    printf("give range of natural number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}
